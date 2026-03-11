#include<iostream>
#include<vector>
using namespace std;

/*
To find the missing number in the array.

Example: 
Input: [1, 2, 3, 4, 5, 6, 8, 9]
Output: 7
*/

// function to find the missing number
int missing_num(vector<int> arr, int size){
    for (int i = 1; i <= size; i++){
        bool found = false;
        for (int j = 0; j < size - 1; j++){
            if (arr[j]==i){
                found = true;
                break;
            }
        }
        if (!found){
            return i;
        }
    }
    return -1;

}

// main function to implement the system
int main(){
    vector <int> arr;
    int n;
    int num;
    cout<<"Enter size: ";
    cin>>n;
    cout<<endl;
    for (int i = 0; i < n; i++){
        cout<<"Enter element at index "<<n<<" : ";
        cin>>num;
        arr.push_back(num);
    }
    cout<<endl;
    cout<<"Input"<<" : ";
    for (int i : arr){
        cout<<i<<" ";
    }
    cout<<endl;
    int n = arr.size();

    int missingNum = missing_num(arr, n);
    cout<<endl;
    cout<<"The missing number is: ";
}