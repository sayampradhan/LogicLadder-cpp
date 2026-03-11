#include<iostream>
#include<vector>
using namespace std;

/*
To find the missing number in the array.

Example: 
Input: [1, 2, 3, 4, 5, 6, 8, 9]
Output: 7
*/

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
    
}