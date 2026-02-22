#include<iostream>
#include<limits>
using namespace std;

/*
----------------------------
RHOMBUS
----------------------------
      *
     ***
    *****
     ***
      *
----------------------------
PARALLELOGRAM
----------------------------
   ********
  ********
 ********
********
*/


void rhombus(int n){
    for (int i = 1; i <= n; i++){
        for (int k = n - i; k >= 0; k--){
            cout<<" ";
        }
        for (int j = 1; j <= i; j++){
            cout<<"* ";            
        }
        cout<<endl;
    }

    for (int i = n - 1; i >= 1; i--){
        for (int k = 0; k <= n - i; k++){
            cout<<" ";
        }
        for (int j = 0; j <= i - 1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void parallelogram(int n){
    for (int i = 1; i <= n; i++){
        for (int space = n - i; space >= 1; space--){
            cout<<" ";
        }
        for (int element = 0; element <= n + 3; element++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

main(){
    int row; 
    int choice;
    cout<<"--------------------------"<<endl<<"Pattern Menu"<<endl<<"--------------------------"<<endl<<"1. Rhombus"<<endl<<"2. Parallelogram"<<endl<<"--------------------------"<<endl<<endl<<"Enter your choice: ";
    cin>>choice;
    cout<<endl<<endl;
    if (choice == 1){
        cout<<"\nEnter the no of rows: ";
        cin>>row;
        rhombus(row);
    }
    else if (choice == 2){
        cout<<"\nEnter the no of rows: ";
        cin>>row;
        parallelogram(row);
    }
    else{
        cout<<"Invalid choice";
    }
    
}