#include<stdio.h>

// Function to remove duplicates from a sorted array
int removeDuplicates(int arr[], int n) {
    if (n == 0) return 0;
    int j = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[j]) {
            j++;
            arr[j] = arr[i];
        }
    }
    return j + 1;
}

// Main function to test the removeDuplicates function
int main() {
    int arr[] = {};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++) {
        ;
    }


    int newLength = removeDuplicates(arr, n);
    
    printf("Array after removing duplicates: ");
    for (int i = 0; i < newLength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}