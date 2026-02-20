#include<iostream>
#include<limits>
using namespace std;

/*
-------------------
PASCAL'S TRIANGLE
-------------------
        1
      1   1
    1   2   1
  1   3   3   1
1   4   6   4   1
-------------------
*/

void pascal_triangle(int n){
    for (int i = 1; i <= n; i++){
        int coefficient = 1;
        for (int k = n-i; k>0; k--){
            cout<<" ";
        }
        for (int j = 1; j <= i; j++){
            cout<<coefficient<<" ";
            coefficient=coefficient*(i-j)/j;
        }
        cout<<endl;
    }

}

main(){
    int n;
    cout<<"Enter the no. of rows: ";
    cin>>n;
    while(true){
        if(!cin.fail()) break;
        else{
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout<<"Invalid Input! Enter Again: ";
            cin>>n;
        }
    }
    pascal_triangle(n);
}