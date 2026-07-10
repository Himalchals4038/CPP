#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int a;
    cin>>a;
    for (int i=0;i<a;i++){
        int b;
        cin>>b;
        unordered_map<int, int> dif;
        long long count=0;
        for (int j=0;j<b;j++){
            int c;
            cin>>c;
            int d = c-j;
            count += dif[d];
            dif[d]++;
        }
        cout<<count<<endl;
    }
    return 0;
}
