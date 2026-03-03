#include <iostream>
#include <vector>
using namespace std;

//Floyd's Tortoise & Hare (Cycle Detection) Algorithm
int duplicate(vector<int> &vec){
    int slow = vec[0];
    int fast = vec[0];
    do{
        slow = vec[slow];
        fast = vec[vec[fast]];
    }while (slow != fast);
    fast = vec[0];
    while (slow != fast){
        slow = vec[slow];
        fast = vec[fast];
    }
    return slow;
}

int main(){
    vector<int> vec = {3,1,3,4,2};
    cout<<duplicate(vec);
    return 0;
}