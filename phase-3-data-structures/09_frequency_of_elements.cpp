#include<iostream>
#include<vector>
using namespace std;

int frequency(vector<int>& arr){
    int n = arr.size();

    

}

int main(){
    vector<int> arr;
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    for(int i = 0; i < n; i++){
        int temp = 0;
        cout<<"Enter element at "<<i<<" : ";
        cin>>temp;
        arr.push_back(temp);
    }
    return 0;
}