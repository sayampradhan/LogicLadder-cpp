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
int right_rotate(vector<int> arr, int size, int k){
    vector<int> new_arr;

    for (int i = size-k; i < size; i++){
        new_arr.push_back(arr[i]);
    }

    for (int i = 0; i < size - k; i ++){
        new_arr.push_back(arr[i]);
    }


    for (int i = 0; i < new_arr.size(); i++){
        if (!(i == new_arr.size()-1))
        cout<<new_arr[i]<<", ";
        else cout<<new_arr[i]<<".";
    }
}

int main(){
    vector<int> arr;
    int k;
    int n;

    for (int i = 0; i < n; i ++){
        cin>>arr[i];
    }

    int size = sizeof(arr)/ sizeof(arr[0]);


    right_rotate(arr, size, k);
}