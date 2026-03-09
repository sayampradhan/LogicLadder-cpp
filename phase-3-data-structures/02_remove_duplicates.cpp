#include <iostream>
#include <algorithm>
using namespace std;

// Function to check if array is sorted
bool isSorted(int arr[], int size) {
    return is_sorted(arr, arr + size);
}

// Insertion sort
void sortArray(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

// Remove duplicates
int removeDuplicates(int arr[], int size) {
    if (size == 0) return 0;

    if (!isSorted(arr, size)) {
        sortArray(arr, size);
    }

    int j = 0;

    for (int i = 1; i < size; i++) {
        if (arr[i] != arr[j]) {
            j++;
            arr[j] = arr[i];
        }
    }

    return j + 1; // new size
}

int main() {
    int arr[] = {};
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;


    size = removeDuplicates(arr, size);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}