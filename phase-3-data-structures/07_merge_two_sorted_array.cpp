#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Most efficient method to merge two sorted arrays is -- TWO POINTER METHOD
// Time complexity - O(n + m)
// Space complexity - O(n + m)

// function to merge two array
void mergeArrays(vector<int>& arr1, vector<int>& arr2){
    int n = arr1.size();
    int m = arr2.size();
    int i = 0, j = 0;

    vector<int> merged;

    while(i < n && j < m){
        if (arr1[i]<=arr2[j]){
            merged.push_back(arr1[i++]);
        }
        else{
            merged.push_back(arr2[j++]);
        }
    }

    while (i < n) merged.push_back(arr1[i++]);

    while (j < m) merged.push_back(arr2[i++]);

    for (int k = 0; k < n; ++k){
        arr1[k] = merged[k];
    }

    for (int k = 0; k < m; ++k){
        arr2[k] = merged[n + k];
    }
}

int main(){
    vector<int> arr1 = {1, 3, 5, 7};
    vector<int> arr2 = {2, 4, 6, 8};

    mergeArrays(arr1, arr2);
}