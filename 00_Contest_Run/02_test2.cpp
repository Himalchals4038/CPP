#include <bits/stdc++.h>
using namespace std;

int main(){
	// your code goes here
    int t;
    cin>>t;
    for (int i=0; i<t; i++) {
        int a,b;
        cin>>a>>b;
        bool found=false;
        int x_ans=-1, y_ans=-1;
        for (int x=1; x<=a; x++) {
            int num = b+2*x;
            if (num%3!=0) continue;
            int y=num/3;
            if (y>=1 && y<=a) {
                x_ans=x;
                y_ans=y;
                found=true;
                break;
            }
        }
        if (!found){
            cout<<-1<<endl;
        } else{
            cout<<x_ans<<" "<<y_ans<<endl;
        }
    }
}
