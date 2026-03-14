#include<iostream>
#include<vector>
using namespace std;

int binary_search(vector<int>& arr, int low, int mid, int high){

}

int main(){
    vector<int> arr;
    int size;
    int low = 0;
    int high;
    int mid;

    cout<<"Enter length of the array: ";
    cin>>size;
    cout<<endl<<endl;
    for(int i = 0; i < size; i++){
        int temp = 0;
        cout<<"Enter element at index "<<i<<" : ";
        cin>>temp;
        arr.push_back(temp);
    }

    high = size - 1;
    

}