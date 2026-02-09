#include<iostream>
#include<string>
using namespace std;
//print your full name 100 times

main(){
    string name;
    cout<<"Enter your full name: ";
    getline(cin, name);
    for (int i = 0; i < 100; i++){
        cout<<name<<endl;
    }
}