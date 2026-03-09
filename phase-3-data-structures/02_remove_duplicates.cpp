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
    for (int i = 1; i < length; i++){
        int key = arr[i];
        int j = i - 1;

        while (j > 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
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