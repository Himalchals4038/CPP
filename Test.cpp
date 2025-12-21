#include <iostream>
#include <format>  // <--- Use this header instead of <print>

int main() {
    // 1. std::format creates the formatted string (works in C++20/23)
    // 2. std::cout prints it (works everywhere)
    std::cout << std::format("Hello C++23! The version is {}\n", 2023);

    return 0;
}