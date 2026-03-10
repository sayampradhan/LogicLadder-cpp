#include<iostream>
#include<vector>
using namespace std;

/*
We need to rotate an array left/right by k position.

- The position k will be inputted from the user.
- And the array will also inputed from the user.
- Then perform the rotation

Example of Rotation by Right:
    1.  array = [1,2,3], k=1
        Output: [3,1,2]
    
    2.  array = [10, 30, 90, 40, 6], k = 3
        Output: [90, 40, 6, 10, 30]

Example of Rotation by Left:
    1.  array = [1,2,3], k=1
        Output: [2,3,1]
    2.  array = [10,30,90,40,6], k = 3
        Output: [40,6,10,30,90]

*/

// The elements will be shift to the right by k elements
int right_rotate(int *arr, int size, int k){
    vector<int> new_arr;

    for (int i = size-k; i < size; i++){
        new_arr.push_back(arr[i]);
    }

    for (int i = 0; i < size - k; i ++){
        new_arr.push_back(arr[i]);
    }

    cout<<"\nArray after rotation: ";
    for (int i = 0; i < new_arr.size(); i++){
        if (!(i == new_arr.size()-1))
        cout<<new_arr[i]<<", ";
        else cout<<new_arr[i]<<".";
    }
}

// main function for implementing the rotation
int main(){
    int temp = 0;
    int k;
    int n;

    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n] = {};

    cout<<endl;

    for (int i = 0; i < n; i++){
        cout<<"Enter element at index "<<i<<" : ";
        cin>>arr[i];
    }

    int size = sizeof(arr)/ sizeof(arr[0]);

    cout<<"\nEnter no. of elements to be rotated: ";
    cin>>k;
    if (!(k < size - 1)){
        cout<<"Enter again (k should be less than size) : ";
        cin>>k;
    }

    right_rotate(arr, size, k);

    return 0;
}