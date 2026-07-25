#include <bits/stdc++.h>
using namespace std;
int trapRainwater(vector<int> &heights){
    int maxLeft = 0, maxRight = 0, water = 0;
    int maxHeight = heights[0], index = 0;
    for (int i=0; i<heights.size(); i++){
        if (heights[i] > maxHeight){
            maxHeight = heights[i];
            index = i;
        }
    }
    for (int i=0; i<index; i++){
        if (heights[i] > maxLeft) maxLeft = heights[i];
        else water += maxLeft-heights[i];
    }
    for (int i=heights.size()-1; i>index; i--){
        if (heights[i] > maxRight) maxRight = heights[i];
        else water += maxRight-heights[i];
    }
    return water;
}
int main(){
    vector<int> vec1 = {4, 2, 0, 5, 2, 6, 2, 3};
    cout<<"Trapped Water: "<<trapRainwater(vec1)<<endl;
    return 0;
}