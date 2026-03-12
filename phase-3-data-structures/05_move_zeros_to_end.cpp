#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// function to move zero to the end
void moveZeros(vector<int> *arr, int size, int count){
    int removeValue = 0;
    auto new_end = remove(arr.begin(), arr.end(), removeValue);
    arr.erase(new_end, numbers.end());

    for (int i = 1; i <= count; i++){
        arr.push_back(0);
    }

    cout<<"New Array is: ";
    for (int i : arr){
        cout<< i << " ";
    }
}

main(){
    vector<int> arr;
    int size;
    int temp = 0;
    cout<<"Enter the length of the array: ";
    cin>>size;
    for (int i = 0; i < size; i ++){
        cout<<"Enter element at index "<<i<<" : ";
        cin>>temp;
        arr.push_back(temp);
        temp = 0;
    }
    int target = 0;
    int count = count(arr.begin(), arr.end(), target);
    moveZeros(arr, arr.size(), count);

}

