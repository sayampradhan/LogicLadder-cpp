#include<iostream>
#include<vector>
using namespace std;

int frequency(vector<int>& arr){
    int n = arr.size();

    vector<bool> visited(n, false);
    vector<vector<int>>flag;

    for(int i = 0; i < n; i++){
        if (visited[i] == true){
            continue;
        }
    }

    int count = 1;

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