#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x = 5, y = 9;
    cout<<x*y<<endl;
    
    x = 5, y = 9;
    x += 5, y -= 4;
    cout<<x*y<<endl;

    x = 5, y = 9;
    x *= 2, y /= 3;
    cout<<x*y<<endl;

    return 0;
}