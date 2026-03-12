#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

/*
Original arr: [1, 2, 0, 8]
Output: [1, 2, 8, 0]
*/

// function to move zeros to the end
void moveZeros(vector<int> &arr, int size, int count){
    int removeValue = 0;
    auto new_end = remove(arr.begin(), arr.end(), removeValue);
    arr.erase(new_end, arr.end());

    for (int i = 1; i <= count; i++){
        arr.push_back(0);
    }

    cout<<"New Array is: ";
    for (int i : arr){
        cout<< i << " ";
    }
}

int main(){
    vector<int> arr;
    int size;
    int temp = 0;

    cout<<"Enter the length of the array: ";
    cin>>size;

    for (int i = 0; i < size; i++){
        cout<<"Enter element at index "<<i<<" : ";
        cin>>temp;
        arr.push_back(temp);
        temp = 0;
    }

    int target = 0;
    int zeroCount = count(arr.begin(), arr.end(), target);

    moveZeros(arr, arr.size(), zeroCount);
}