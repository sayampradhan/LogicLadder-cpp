#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int binary_search(vector<int>& arr){
    int low = 0;
    int high = arr.size() - 1;
    int mid = (high - low) / 2;

    



}

int main(){
    vector<int> arr;
    int size;
    int low;
    int high;
    int mid;
    int element;

    cout<<"Enter length of the array: ";
    cin>>size;
    cout<<endl<<endl;
    for(int i = 0; i < size; i++){
        int temp = 0;
        cout<<"Enter element at index "<<i<<" : ";
        cin>>temp;
        arr.push_back(temp);
    }

    sort(arr.begin(), arr.end()); 
    auto last = std::unique(arr.begin(), arr.end());
    arr.erase(last, arr.end());
    
    cout<<endl<<endl;
    cout<<"Enter element to search: ";
    cin>>
    binary_search(arr);
}