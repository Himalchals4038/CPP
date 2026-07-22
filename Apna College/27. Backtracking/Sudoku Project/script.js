/**
 * Sudoku Backtracking Visualizer & Engine
 * Optimized using Bitmasking (Row, Column, Box masks)
 */

document.addEventListener('DOMContentLoaded', () => {
    // --- State Variables ---
    const GRID_SIZE = 9;
    let board = Array.from({ length: 9 }, () => Array(9).fill(0));
    let initialBoard = Array.from({ length: 9 }, () => Array(9).fill(0));
    let isGiven = Array.from({ length: 9 }, () => Array(9).fill(false));

    // Bitmasks matching optimal1.cpp logic
    let rowMask = new Array(9).fill(0);
    let colMask = new Array(9).fill(0);
    let boxMask = new Array(9).fill(0);

    // Selected cell state
    let selectedCell = null; // { r, c }

    // Simulation Execution state
    let isSolving = false;
    let isPaused = false;
    let stepRequested = false;
    let delayMs = 50;
    let solveTimer = null;
    let startTime = 0;
    let elapsedTime = 0;
    let stepsCount = 0;
    let backtracksCount = 0;
    let maxRecursionDepth = 0;
    let emptyCells = [];

    // Audio Context for sound effects
    let soundEnabled = true;
    let audioCtx = null;

    // --- Preset Puzzles ---
    const PRESETS = {
        easy: [
            [5,3,0,0,7,0,0,0,0],
            [6,0,0,1,9,5,0,0,0],
            [0,9,8,0,0,0,0,6,0],
            [8,0,0,0,6,0,0,0,3],
            [4,0,0,8,0,3,0,0,1],
            [7,0,0,0,2,0,0,0,6],
            [0,6,0,0,0,0,2,8,0],
            [0,0,0,4,1,9,0,0,5],
            [0,0,0,0,8,0,0,7,9]
        ],
        medium: [
            [0,0,0,6,0,0,4,0,0],
            [7,0,0,0,0,3,6,0,0],
            [0,0,0,0,9,1,0,8,0],
            [0,0,0,0,0,0,0,0,0],
            [0,5,0,1,8,0,0,0,3],
            [0,0,0,3,0,6,0,4,5],
            [0,4,0,2,0,0,0,6,0],
            [9,0,3,0,0,0,0,0,0],
            [0,2,0,0,0,0,1,0,0]
        ],
        hard: [
            [0,0,0,0,0,0,0,1,2],
            [0,0,0,0,0,0,0,0,3],
            [0,0,2,3,0,0,4,0,0],
            [0,0,1,8,0,0,0,0,5],
            [0,6,0,0,7,0,0,8,0],
            [0,0,0,0,0,9,0,0,0],
            [0,0,8,5,0,0,0,0,0],
            [9,0,0,0,4,0,5,0,0],
            [4,7,0,0,0,6,0,0,0]
        ],
        expert: [
            // AI Escargot
            [1,0,0,0,0,7,0,9,0],
            [0,3,0,0,2,0,0,0,8],
            [0,0,9,6,0,0,5,0,0],
            [0,0,5,3,0,0,9,0,0],
            [0,1,0,0,8,0,0,0,2],
            [6,0,0,0,0,4,0,0,0],
            [3,0,0,0,0,0,0,1,0],
            [0,4,0,0,0,0,0,0,7],
            [0,0,7,0,0,0,3,0,0]
        ],
        unsolvable: [
            [5,1,6,8,4,9,7,3,2],
            [3,0,7,6,0,5,0,0,0],
            [8,0,9,7,0,0,0,6,5],
            [1,3,5,0,6,0,9,0,7],
            [4,7,2,5,9,1,0,0,6],
            [9,6,8,3,7,0,0,5,0],
            [2,5,3,1,8,6,0,7,4],
            [6,8,4,2,0,7,5,0,0],
            [7,9,1,0,5,0,6,0,0]
        ],
        empty: Array.from({ length: 9 }, () => Array(9).fill(0))
    };

    // --- DOM Elements ---
    const sudokuGridEl = document.getElementById('sudokuGrid');
    const presetSelect = document.getElementById('presetSelect');
    const loadPresetBtn = document.getElementById('loadPresetBtn');
    const startBtn = document.getElementById('startBtn');
    const pauseBtn = document.getElementById('pauseBtn');
    const stepBtn = document.getElementById('stepBtn');
    const instantSolveBtn = document.getElementById('instantSolveBtn');
    const resetBtn = document.getElementById('resetBtn');
    const clearBtn = document.getElementById('clearBtn');
    const speedSlider = document.getElementById('speedSlider');
    const speedValEl = document.getElementById('speedVal');

    const statStepsEl = document.getElementById('statSteps');
    const statBacktracksEl = document.getElementById('statBacktracks');
    const statTimeEl = document.getElementById('statTime');
    const statDepthEl = document.getElementById('statDepth');

    const statusBadge = document.getElementById('statusBadge');
    const statusText = document.getElementById('statusText');
    const progressBar = document.getElementById('progressBar');
    const progressText = document.getElementById('progressText');
    const logConsole = document.getElementById('logConsole');
    const clearLogBtn = document.getElementById('clearLogBtn');
    const inspectorDetails = document.getElementById('inspectorDetails');
    const soundToggleBtn = document.getElementById('soundToggleBtn');
    const themeToggleBtn = document.getElementById('themeToggleBtn');

    // --- Sound Synth Helpers ---
    function initAudio() {
        if (!audioCtx) {
            audioCtx = new (window.AudioContext || window.webkitAudioContext)();
        }
    }

    function playTone(freq, duration, type = 'sine') {
        if (!soundEnabled) return;
        try {
            initAudio();
            if (audioCtx.state === 'suspended') {
                audioCtx.resume();
            }
            const osc = audioCtx.createOscillator();
            const gain = audioCtx.createGain();
            osc.type = type;
            osc.frequency.value = freq;
            gain.gain.setValueAtTime(0.05, audioCtx.currentTime);
            gain.gain.exponentialRampToValueAtTime(0.001, audioCtx.currentTime + duration);
            osc.connect(gain);
            gain.connect(audioCtx.destination);
            osc.start();
            osc.stop(audioCtx.currentTime + duration);
        } catch (e) {
            // Audio ignore
        }
    }

    // --- Helper Functions ---
    function getBoxIdx(r, c) {
        return Math.floor(r / 3) * 3 + Math.floor(c / 3);
    }

    function isBitSet(mask, val) {
        return (mask & (1 << (val - 1))) !== 0;
    }

    function isValid(r, c, val) {
        const mask = (1 << (val - 1));
        const box = getBoxIdx(r, c);
        return !((rowMask[r] & mask) || (colMask[c] & mask) || (boxMask[box] & mask));
    }

    function updateBitmasks() {
        rowMask.fill(0);
        colMask.fill(0);
        boxMask.fill(0);

        for (let r = 0; r < 9; r++) {
            for (let c = 0; c < 9; c++) {
                const val = board[r][c];
                if (val > 0) {
                    const mask = (1 << (val - 1));
                    rowMask[r] |= mask;
                    colMask[c] |= mask;
                    boxMask[getBoxIdx(r, c)] |= mask;
                }
            }
        }
    }

    // --- Board Rendering & DOM Setup ---
    function createGridDOM() {
        sudokuGridEl.innerHTML = '';
        for (let r = 0; r < 9; r++) {
            for (let c = 0; c < 9; c++) {
                const cell = document.createElement('div');
                cell.className = 'cell';
                cell.dataset.row = r;
                cell.dataset.col = c;
                cell.id = `cell-${r}-${c}`;

                cell.addEventListener('click', () => onCellClick(r, c));
                sudokuGridEl.appendChild(cell);
            }
        }
    }

    function renderBoard() {
        let filledCount = 0;
        for (let r = 0; r < 9; r++) {
            for (let c = 0; c < 9; c++) {
                const cellEl = document.getElementById(`cell-${r}-${c}`);
                const val = board[r][c];
                cellEl.textContent = val > 0 ? val : '';

                // Reset class list keeping cell base
                cellEl.className = 'cell';
                if (isGiven[r][c]) {
                    cellEl.classList.add('cell-given');
                }
                if (val > 0) filledCount++;

                // Peer highlight if cell selected
                if (selectedCell) {
                    if (selectedCell.r === r && selectedCell.c === c) {
                        cellEl.classList.add('cell-selected');
                    } else if (selectedCell.r === r || selectedCell.c === c || getBoxIdx(selectedCell.r, selectedCell.c) === getBoxIdx(r, c)) {
                        cellEl.classList.add('cell-peer');
                    }
                }
            }
        }

        // Progress bar
        progressBar.style.width = `${(filledCount / 81) * 100}%`;
        progressText.textContent = `${filledCount} / 81`;
        renderInspector();
    }

    function onCellClick(r, c) {
        if (isSolving) return;
        selectedCell = { r, c };
        renderBoard();
    }

    // Input via Keyboard
    document.addEventListener('keydown', (e) => {
        if (isSolving || !selectedCell) return;
        const { r, c } = selectedCell;

        if (e.key >= '1' && e.key <= '9') {
            const num = parseInt(e.key);
            setCellInput(r, c, num);
        } else if (e.key === 'Backspace' || e.key === 'Delete' || e.key === '0') {
            setCellInput(r, c, 0);
        } else if (e.key === 'ArrowUp' && r > 0) {
            selectedCell = { r: r - 1, c };
            renderBoard();
        } else if (e.key === 'ArrowDown' && r < 8) {
            selectedCell = { r: r + 1, c };
            renderBoard();
        } else if (e.key === 'ArrowLeft' && c > 0) {
            selectedCell = { r, c: c - 1 };
            renderBoard();
        } else if (e.key === 'ArrowRight' && c < 8) {
            selectedCell = { r, c: c + 1 };
            renderBoard();
        }
    });

    // Touch / Numpad clicks
    document.querySelectorAll('.num-btn').forEach(btn => {
        btn.addEventListener('click', () => {
            if (isSolving || !selectedCell) return;
            const val = btn.dataset.val;
            if (val === 'clear') {
                setCellInput(selectedCell.r, selectedCell.c, 0);
            } else {
                setCellInput(selectedCell.r, selectedCell.c, parseInt(val));
            }
        });
    });

    function setCellInput(r, c, num) {
        board[r][c] = num;
        initialBoard[r][c] = num;
        isGiven[r][c] = num > 0;
        updateBitmasks();
        renderBoard();
    }

    // --- Preset Loading ---
    function loadPreset(presetKey) {
        if (isSolving) stopSolver();
        const preset = PRESETS[presetKey] || PRESETS.medium;
        board = preset.map(row => [...row]);
        initialBoard = preset.map(row => [...row]);
        isGiven = preset.map(row => row.map(val => val > 0));

        selectedCell = null;
        updateBitmasks();
        resetStats();
        renderBoard();
        logMessage(`Loaded preset: ${presetKey.toUpperCase()}`, 'log-info');
        setStatus('Ready', 'badge-info');
    }

    // --- Candidate Inspector ---
    function renderInspector() {
        if (!selectedCell) {
            inspectorDetails.innerHTML = `<div class="inspector-placeholder">Click any cell to inspect bitmask constraints & candidate digits.</div>`;
            return;
        }

        const { r, c } = selectedCell;
        const currentVal = board[r][c];
        const box = getBoxIdx(r, c);

        let candidateChipsHTML = '';
        let availableCount = 0;

        for (let d = 1; d <= 9; d++) {
            const mask = (1 << (d - 1));
            const inRow = (rowMask[r] & mask) !== 0;
            const inCol = (colMask[c] & mask) !== 0;
            const inBox = (boxMask[box] & mask) !== 0;
            const isAllowed = !inRow && !inCol && !inBox;

            if (isAllowed) availableCount++;

            candidateChipsHTML += `
                <div class="candidate-chip ${isAllowed ? 'chip-allowed' : 'chip-blocked'}" 
                     title="${isAllowed ? 'Allowed' : `Blocked by: ${inRow ? 'Row ' : ''}${inCol ? 'Col ' : ''}${inBox ? 'Box' : ''}`}">
                    ${d}
                </div>
            `;
        }

        inspectorDetails.innerHTML = `
            <div class="inspector-grid">
                <div class="inspector-row">
                    <strong>Cell Position:</strong>
                    <span>Row ${r + 1}, Col ${c + 1} (Box ${box + 1})</span>
                </div>
                <div class="inspector-row">
                    <strong>Status:</strong>
                    <span>${isGiven[r][c] ? 'Given (Fixed)' : (currentVal > 0 ? `Filled (${currentVal})` : 'Empty')}</span>
                </div>
                <div class="inspector-row">
                    <strong>Valid Candidates (${availableCount}):</strong>
                </div>
                <div class="bit-candidates">
                    ${candidateChipsHTML}
                </div>
            </div>
        `;
    }

    // --- Execution Log Helper ---
    function logMessage(text, className = 'log-info') {
        const entry = document.createElement('div');
        entry.className = `log-entry ${className}`;
        entry.textContent = `[${new Date().toLocaleTimeString().split(' ')[0]}] ${text}`;
        logConsole.appendChild(entry);
        logConsole.scrollTop = logConsole.scrollHeight;
    }

    clearLogBtn.addEventListener('click', () => {
        logConsole.innerHTML = '';
    });

    // --- Status Badge Helper ---
    function setStatus(text, badgeClass = 'badge-info') {
        statusText.textContent = text;
        statusBadge.className = `badge ${badgeClass}`;
    }

    function resetStats() {
        stepsCount = 0;
        backtracksCount = 0;
        elapsedTime = 0;
        maxRecursionDepth = 0;
        statStepsEl.textContent = '0';
        statBacktracksEl.textContent = '0';
        statTimeEl.textContent = '0.0s';
        statDepthEl.textContent = '0';
    }

    // --- Check Initial Board Validity ---
    function validateInitialBoard() {
        const tempRow = new Array(9).fill(0);
        const tempCol = new Array(9).fill(0);
        const tempBox = new Array(9).fill(0);

        for (let r = 0; r < 9; r++) {
            for (let c = 0; c < 9; c++) {
                const val = board[r][c];
                if (val > 0) {
                    const mask = (1 << (val - 1));
                    const box = getBoxIdx(r, c);
                    if ((tempRow[r] & mask) || (tempCol[c] & mask) || (tempBox[box] & mask)) {
                        const cellEl = document.getElementById(`cell-${r}-${c}`);
                        if (cellEl) cellEl.classList.add('cell-invalid');
                        logMessage(`Conflict found for digit ${val} at Cell (${r + 1}, ${c + 1})!`, 'log-error');
                        return false;
                    }
                    tempRow[r] |= mask;
                    tempCol[c] |= mask;
                    tempBox[box] |= mask;
                }
            }
        }
        return true;
    }

    // --- Asynchronous Backtracking Visualizer Engine ---
    async function startVisualizer(instant = false) {
        if (isSolving && isPaused) {
            // Resume
            isPaused = false;
            startBtn.disabled = true;
            pauseBtn.disabled = false;
            setStatus('Solving...', 'badge-info');
            logMessage('Resumed visualization.', 'log-info');
            return;
        }

        if (isSolving) return;

        // Verify setup
        if (!validateInitialBoard()) {
            setStatus('Invalid Initial Board', 'badge-danger');
            alert('Cannot solve: Initial Sudoku board contains duplicate numbers in a row, column, or 3x3 block!');
            return;
        }

        // Prepare empty cell queue
        emptyCells = [];
        for (let r = 0; r < 9; r++) {
            for (let c = 0; c < 9; c++) {
                if (board[r][c] === 0) {
                    emptyCells.push({ r, c });
                }
            }
        }

        if (emptyCells.length === 0) {
            logMessage('Sudoku is already complete!', 'log-valid');
            setStatus('Solved', 'badge-success');
            return;
        }

        isSolving = true;
        isPaused = false;
        stepRequested = false;
        resetStats();
        startTime = performance.now();

        startBtn.disabled = true;
        pauseBtn.disabled = instant;
        stepBtn.disabled = instant;
        presetSelect.disabled = true;
        loadPresetBtn.disabled = true;
        clearBtn.disabled = true;

        setStatus('Solving...', 'badge-info');
        logMessage(`Starting Backtracking Algorithm on ${emptyCells.length} empty cells...`, 'log-info');

        const success = await solveStepByStep(0, instant);

        const endTime = performance.now();
        elapsedTime = ((endTime - startTime) / 1000).toFixed(2);
        statTimeEl.textContent = `${elapsedTime}s`;

        isSolving = false;
        isPaused = false;
        startBtn.disabled = false;
        pauseBtn.disabled = true;
        stepBtn.disabled = false;
        presetSelect.disabled = false;
        loadPresetBtn.disabled = false;
        clearBtn.disabled = false;

        // Ensure board DOM is updated to reflect final state
        renderBoard();

        if (success) {
            setStatus('Solved Successfully!', 'badge-success');
            logMessage(`SOLVED! Completed in ${stepsCount} steps, ${backtracksCount} backtracks (${elapsedTime}s).`, 'log-success');
            triggerSolvedAnimation();
            playTone(880, 0.3, 'triangle');
        } else {
            setStatus('No Solution Exists', 'badge-danger');
            logMessage(`UNSOLVABLE! Exhausted all possibilities in ${stepsCount} steps (${elapsedTime}s).`, 'log-error');
            playTone(200, 0.5, 'sawtooth');
        }
    }

    // Step-by-step recursive engine with async pause/delay hooks
    async function solveStepByStep(idx, instant) {
        if (idx === emptyCells.length) {
            return true;
        }

        const { r, c } = emptyCells[idx];
        const box = getBoxIdx(r, c);

        if (idx + 1 > maxRecursionDepth) {
            maxRecursionDepth = idx + 1;
            statDepthEl.textContent = maxRecursionDepth;
        }

        for (let i = 0; i < 9; i++) {
            if (!isSolving) return false;

            const mask = (1 << i);
            const val = i + 1;

            // Bitmask validity check (O(1))
            if (!((rowMask[r] & mask) || (colMask[c] & mask) || (boxMask[box] & mask))) {
                // Place digit
                board[r][c] = val;
                rowMask[r] |= mask;
                colMask[c] |= mask;
                boxMask[box] |= mask;
                stepsCount++;

                statStepsEl.textContent = stepsCount;

                if (!instant) {
                    highlightCell(r, c, val, 'cell-valid');
                    playTone(400 + i * 40, 0.05, 'sine');
                    logMessage(`[TRY] Digit ${val} valid at (${r + 1}, ${c + 1})`, 'log-valid');
                    await waitDelay();
                }

                if (await solveStepByStep(idx + 1, instant)) {
                    return true;
                }

                // Backtrack
                board[r][c] = 0;
                rowMask[r] &= ~mask;
                colMask[c] &= ~mask;
                boxMask[box] &= ~mask;
                backtracksCount++;
                statBacktracksEl.textContent = backtracksCount;

                if (!instant) {
                    highlightCell(r, c, '', 'cell-backtrack');
                    playTone(250, 0.08, 'square');
                    logMessage(`[BACKTRACK] Undoing ${val} at (${r + 1}, ${c + 1})`, 'log-backtrack');
                    await waitDelay();
                }
            }
        }

        return false;
    }

    async function waitDelay() {
        if (isPaused) {
            while (isPaused && !stepRequested && isSolving) {
                await new Promise(resolve => setTimeout(resolve, 50));
            }
            stepRequested = false;
        } else if (delayMs > 0) {
            await new Promise(resolve => setTimeout(resolve, delayMs));
        }

        // Live Timer
        const now = performance.now();
        statTimeEl.textContent = `${((now - startTime) / 1000).toFixed(1)}s`;
    }

    function highlightCell(r, c, val, stateClass) {
        const cellEl = document.getElementById(`cell-${r}-${c}`);
        if (!cellEl) return;
        cellEl.textContent = val;
        cellEl.className = `cell ${stateClass}`;
        progressBar.style.width = `${((81 - emptyCells.length + emptyCells.findIndex(cell => cell.r === r && cell.c === c)) / 81) * 100}%`;
    }

    function triggerSolvedAnimation() {
        for (let r = 0; r < 9; r++) {
            for (let c = 0; c < 9; c++) {
                const cellEl = document.getElementById(`cell-${r}-${c}`);
                setTimeout(() => {
                    if (cellEl) cellEl.classList.add('cell-solved-wave');
                }, (r * 9 + c) * 12);
            }
        }
    }

    function stopSolver() {
        isSolving = false;
        isPaused = false;
        startBtn.disabled = false;
        pauseBtn.disabled = true;
        stepBtn.disabled = false;
        presetSelect.disabled = false;
        loadPresetBtn.disabled = false;
        clearBtn.disabled = false;
        setStatus('Stopped', 'badge-info');
    }

    // --- Control Event Handlers ---
    startBtn.addEventListener('click', () => startVisualizer(false));

    pauseBtn.addEventListener('click', () => {
        if (isSolving && !isPaused) {
            isPaused = true;
            startBtn.disabled = false;
            pauseBtn.disabled = true;
            setStatus('Paused', 'badge-warning');
            logMessage('Visualization paused.', 'log-info');
        }
    });

    stepBtn.addEventListener('click', () => {
        if (!isSolving) {
            isPaused = true;
            startVisualizer(false);
        } else if (isPaused) {
            stepRequested = true;
        }
    });

    instantSolveBtn.addEventListener('click', () => {
        if (isSolving) stopSolver();
        startVisualizer(true);
    });

    resetBtn.addEventListener('click', () => {
        if (isSolving) stopSolver();
        board = initialBoard.map(row => [...row]);
        updateBitmasks();
        resetStats();
        renderBoard();
        logMessage('Reset puzzle to initial state.', 'log-info');
        setStatus('Ready', 'badge-info');
    });

    clearBtn.addEventListener('click', () => {
        if (isSolving) stopSolver();
        board = Array.from({ length: 9 }, () => Array(9).fill(0));
        initialBoard = Array.from({ length: 9 }, () => Array(9).fill(0));
        isGiven = Array.from({ length: 9 }, () => Array(9).fill(false));
        selectedCell = null;
        updateBitmasks();
        resetStats();
        renderBoard();
        logMessage('Cleared grid.', 'log-info');
        setStatus('Grid Cleared', 'badge-info');
    });

    loadPresetBtn.addEventListener('click', () => {
        loadPreset(presetSelect.value);
    });

    speedSlider.addEventListener('input', (e) => {
        delayMs = parseInt(e.target.value);
        speedValEl.textContent = `${delayMs}ms`;
    });

    // Theme Toggle
    themeToggleBtn.addEventListener('click', () => {
        document.body.classList.toggle('light-theme');
        const isLight = document.body.classList.contains('light-theme');
        themeToggleBtn.innerHTML = isLight ? '<i class="fa-solid fa-sun"></i>' : '<i class="fa-solid fa-moon"></i>';
    });

    // Sound Toggle
    soundToggleBtn.addEventListener('click', () => {
        soundEnabled = !soundEnabled;
        soundToggleBtn.innerHTML = soundEnabled ? '<i class="fa-solid fa-volume-high"></i>' : '<i class="fa-solid fa-volume-xmark"></i>';
        soundToggleBtn.classList.toggle('btn-secondary', !soundEnabled);
    });

    // Initialize Grid & Load default preset
    createGridDOM();
    loadPreset('medium');
});
