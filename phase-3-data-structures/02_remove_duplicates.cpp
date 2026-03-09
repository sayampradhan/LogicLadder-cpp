#include<iostream>
using namespace std;

bool isSorted(int arr[]){
    int length = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < length; i++){
        if (arr[i]<arr[i+1]){
            return true;
        }
        else{
            return false;
        }
    }
}

// Insertion sort for sorting the array
void sortArray(int *arr){
    int length = sizeof(arr)/sizeof(arr[0]);
    int key = arr[i];
    for (int i = 0; i < length; i++){
        if (arr[i]>arr[i+1]){
            temp = arr[i];
            int arr[i] = arr[i+1];
        }
        else{
            arr[i+1] = arr[i];
        }
    }
}

// Function to remove duplicates from an array
void removeDuplicates(int arr[], int size){
    if (size == 0) return;
    if (isSorted(arr)==true){

    }
}

// main function
main(){
    int arr[] = {1,2,5,1,7};
}