#include<iostream>
#include<limits>
using namespace std;

void hollow_diamond(int n){
    for (int i = 1; i <= n; i++){
        for (int k = i; k <= n; k++){
            cout<<" ";
        }
        for (int j = 1; j <= i; j++){
            if (j == 1 || j == i){
                cout<<"* ";
            }
            else if(i == n){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    for (int i = 1; i <= n; i++){
        for (int k = n - 1; k >= n - i; k--){
            cout<<" ";
        }
        for (int j = n; j >= i; j--){
            if (j == n || j == i){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

main(){
    int n;
    cout<<"Enter limit: ";
    cin>>n;
    while(true){
        if (n > 3){
            if(!(cin.fail())){
                break;
            }
            else{
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout<<"Invalid Input! Enter in numbers only: ";
                cin>>n;
            }
        }
        else{
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout<<"Invalid Input! Enter number (> 3): ";
            cin>>n;
        }
    }
    hollow_diamond(n);
}