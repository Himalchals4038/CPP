#include<iostream>
#include<vector>
using namespace std;

/*Vector has 2 components - Size & Capacity
vector <int> v                0       0
v.push_back(10)               1       1
v.push_back(5)                2       2
v.push_back(48)               3       4
v.push_back(3)                4       4
v.push_back(22)               5       8
v.push_back(6)                6       8
As elements are pushed into the vector array the system checks if size is less than or equal to capacity
If size increases beyond capacity limit, the capacity is doubled till size is reached, then the process repeats 
*/

int main(){    
    vector<int> vec1; //Method of declaring a vector without any value allocation

    vector<int> vec2 = {8,5,2}; //Creating vector of size 3 and allocating 3 values in them
    cout<<vec2[0]<<endl;
    cout<<vec2[1]<<endl;
    cout<<vec2[2]<<endl;
    
    vector<int> vec3 (3,0); //(No. of spaces formed, Value stored in each space)
    cout<<vec3[0]<<endl;
    cout<<vec3[1]<<endl;
    cout<<vec3[2]<<endl;
    
    return 0;
}