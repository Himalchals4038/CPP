#include <bits/stdc++.h>
using namespace std;
int peak(vector<int> &vec, int idx)
{
    if (vec.size() < 3)
        return -1;
    int start = 1, end = vec.size() - 2;
    if (idx < end && vec[idx] < vec[idx + 1])
        start = idx + 1;
    else if (idx > 0 && vec[idx] < vec[idx - 1])
        end = idx - 1;
    else
        return vec[idx];

    while (start < end)
    {
        int mid = start + (end - start) / 2;
        if (vec[mid] < vec[mid + 1])
            start = mid + 1;
        else
            end = mid;
    }
    return vec[start];
}
int main()
{
    vector<int> vec = {1, 3, 5, 7, 9, 11, 23, 15, 10, 6, 4, 2, 0};
    cout << "Peak: " << peak(vec, (vec.size() - 1) / 2) << endl;
    return 0;
}