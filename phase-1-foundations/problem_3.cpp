#include<iostream>
using namespace std;

int valid_input(){

    int number;
    cout<<"Enter a number: ";
    cin>>number;

    while(1){
        if (cin.fail()){
            cout<<"Invalid input.\nEnter a VALID number: ";
            cin.clear();
            cin.ignore(132, '\n');
            cin >> number;
        }

        if (!cin.fail()){
            break;
        }
    }

    return number;

}

// find the largest number of 3 numbers
main(){
    int num1, num2, num3;

    cout<<"GREATEST OF THE THREE NUMBERS"<<endl;

    num1 = valid_input();
    num2 = valid_input();
    num3 = valid_input();

    if ((num1 > num2) && (num1 > num3)){
        cout<<num1<<" is the greatest.";
    }

    else if((num2 > num1) && (num2 > num3)){
        cout<<num2<<" is the greatest.";
    }

    else{
        cout<<num3<<" is the greatest.";
    }
    
}