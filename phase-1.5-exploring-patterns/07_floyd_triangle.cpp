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

    int rows;

    cout<<"-----------FLOYD'S TRIANGLE----------";
    cout<<endl<<endl;
    cout<<"Enter the no. of rows: ";
    cin>>rows;

    while(true){
        if(!(cin.fail())){
            break;
        }
        else{
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max());
            cout<<"Enter a valid integer: ";
            cin>>rows;
        }
    }

    floyd(rows);
}