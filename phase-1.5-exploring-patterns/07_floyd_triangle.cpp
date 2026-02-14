#include<iostream>
#include<limits>
#include<iomanip>
using namespace std;

/*
FLOYD'S TRIANGLE

For N=5 (N is the row)

 1
 2   3
 4   5   6
 7   8   9   10
 11  12  13  14  15

*/

void floyd(int n){
    int num = 1;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            cout<< left << setw(4) << num;
            num += 1;
        }
        cout<<endl;
    }
}

main(){

    floyd(5);

}