#include<iostream>
using namespace std;

// Function to check if the array is sorted
template <size_t N>
bool isSorted(int (&arr)[N]){
    int length = N;
    if (is_sorted(arr, arr + N)){
        return true;
    }
    else{
        return false;
    }
}

// Insertion sort for sorting the array
template <size_t N>
void sortArray(int (&arr)[N]){
    int length = N;
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