#include<iostream>
#include<limits>
using namespace std;

void butterfly(int n){
    // upper half
    for (int p = 1; p <= n; p++){
        //left stars
        for (int i = 1; i <= p; i++){
            if (i == 1 || i == p)
            cout<<"* ";
            else
            cout<<"  ";
        }
        //blank spaces
        for (int j = 1; j <= 2*(n-p); j++){
            cout<<"  ";
        }
        // right stars
        for (int k = 1; k <= p; k++){
            if (k == 1 || k == p)
            cout<<"* ";
            else
            cout<<"  ";
        }
        cout<<endl;
    }
    for (int q = n-1; q>=1; q--){
        for(int i = 1; i <= q; i++){
            if (i == 1 || i == q)
            cout<<"* ";
            else
            cout<<"  ";
        }
        for(int j = 1; j <= 2*(n-q); j++){
            cout<<"  ";
        }
        for(int k = 1; k<=q; k++){
            if (k == 1 || k == q)
            cout<<"* ";
            else
            cout<<"  ";
        }
        cout<<endl;
    }
}


main(){
    int n;    
    cout<<"Enter n: ";
    cin>>n;
    while(true){
        if (n > 2){
            if(!(cin.fail())){
                break;
            }
            else{
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout<<"Enter digits only: ";
                cin>>n;
            }
        }
        else{
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout<<"Enter n (greater than 2): ";
            cin>>n;
        }
    }

    butterfly(n);

}