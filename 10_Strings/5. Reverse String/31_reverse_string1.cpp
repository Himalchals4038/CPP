#include <bits/stdc++.h>
using namespace std;

int main(){
    char str[] = "Administer";
    for(int i=0;i<strlen(str)/2;i++) swap(str[i],str[strlen(str)-1-i]);
    copy(str,str+strlen(str), ostream_iterator<char>(cout));
    cout<<endl;
    return 0;
}