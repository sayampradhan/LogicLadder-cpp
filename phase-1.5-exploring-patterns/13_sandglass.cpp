#include<iostream>
#include<limits>
using namespace std;


/*
------------------
SANDGLASS PATTERN
------------------

* * * * *
  * * *
    *
    * 
  * * *
* * * * *

*/

void sandglass(int n){

    for (int i = n; i >= 0; i--){
        for (int j = i - n; j <= n; j++){
            cout<<"  ";
        }
        for (int k = i; k >= 1; k--){
          cout<<"* ";
        }
        for (int q = i; q >= 0; q--){
          cout<<"* ";
        }
        cout<<endl;
    }

    for (int i = 1; i <= n; i++){
      for (int j = n; j >= i - n; j--){
        cout<<"  ";

      }
      for (int p = i; p >= 1; p--){
        cout<<"* ";
      }
      for (int k = 0; k <= i; k++){
        cout<<"* ";
      }
      cout<<endl;
    }
  }

main(){
  sandglass(5);
}