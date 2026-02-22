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

}


main(){
    rhombus(5);
}