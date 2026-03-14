#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int binary_search(vector<int>& arr, int element){
    int low = 0;
    int high = arr.size() - 1;

    while(low <= high){
        int mid = low + (high - low) / 2;

        if(arr[mid] == element){
            return mid;
        }
        else if(arr[mid] < element){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }

    return -1;
}

int main(){
    vector<int> arr;
    int size;
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
    auto last = unique(arr.begin(), arr.end());
    arr.erase(last, arr.end());

    cout<<endl<<endl;
    cout<<"Enter element to search: ";
    cin>>element;

    int result = binary_search(arr, element);

    if(result != -1){
        cout<<"Element found at index "<<result;
    }
    else{
        cout<<"Element not found";
    }
}