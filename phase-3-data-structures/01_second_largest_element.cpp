#include<iostream>
#include<array>
#include<vector>
using namespace std;

// Finding the second largest number in an array
/*
FOUR ALGORITHMS used to solve this problem are:
    1. Single-Pass Approach
    2. Two-Pass Approach
    3. Sorting Approach
    4. Tournament Approach
*/

void single_pass(int* arr, int length){
    int max1 = 0, max2 = 0;
    // int length = sizeof(arr) / sizeof(arr[0]);
    int i = 0;
    while(i < length){
        if (arr[i]<arr[i+1]){
            int max2 = arr[i];
            int max1 = arr[i+1];
        }
        i++;
    }
    cout<<"Second largest element in the array: "<<max2;
}

main(){
    int size;
    cout<<"Enter the length of the array: ";
    cin>>size;
    vector<int> test(size);
    for (int i = 1; i <= size; i++){
        cout<<"Enter the element "<<i<<": ";
        cin>>test[i];
    }
    single_pass(test, size);
}