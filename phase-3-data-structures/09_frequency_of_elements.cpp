#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> freq(vector<int>& arr){
    int n = arr.size();

    vector<bool> visited(n, false);
    vector<vector<int>>frequency;

    for(int i = 0; i < n; i++){
        if (visited[i] == true){
            continue;
        }

        int count = 1;
        for (int j = i + 1; j < n; j++){
            if(arr[i] == arr[j]){
                visited[j] = true;
                count++;
            }
        }
        frequency.push_back({arr[i], count});
    }
    return frequency;
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
    vector<vector<int>>frequency = freq(arr);
    sort(frequency.begin(), frequency.end());
    for (auto x : frequency){
        cout << "The frequency of "<< x[0] << "is " << x[1] << '\n';
    }
    return 0;
}