#include <bits/stdc++.h>
using namespace std;

void printArray(vector<int>&arr){
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
    vector<int>nums{1,2,3,4,5};
    int n = nums.size();
    for(int i=0; i<n; i++){
        reverse(nums.begin(), nums.begin()+1);
        reverse(nums.begin()+1, nums.end());
        reverse(nums.begin(), nums.end());
        printArray(nums);
    }
    return 0;
}