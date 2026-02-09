#include<iostream>
using namespace std;

// check if a number is positive, negative or zero
main(){
    int num;
    cout<<"CHECK IF A NUMBER IS POSITIVE, NEGATIVE OR ZERO \n\n\n";
    cout<<"Enter a number: ";
    cin>>num;

    while(1){
        if (cin.fail()){
            cout<<"\n\nInvalid. Enter a VALID number. "<<endl;
            cin.clear();
            cin.ignore(132, '\n');
            cout<<"\nEnter a NUMBER: ";
            cin >> num;
        }

        if (!cin.fail()){
            break;
        }
    }

    cout<<"\n\n";

    if (num < 0){
        cout<<num<<" is a negative number.";
    }
    else if (num > 0){
        cout<<num<<" is a positive number.";
    }
    else{
        cout<<num<<" is a zero.";
    }
}
