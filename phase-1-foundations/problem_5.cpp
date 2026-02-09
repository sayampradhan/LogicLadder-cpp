#include<iostream>
#include<string>
#include<cctype>

using namespace std;

// reverse a number (123 -> 321)
main(){
    string num;
    while(true){
        cout << "Enter a number: ";
        getline(cin, num);

        bool valid = true;

        // checks if the string is empty
        if(num.empty()){
            valid - false;
        }

        // checks if there is any other value than integer (also includes spaces)
        for(char c : num){
            if(!isdigit(c)){
                valid = false;
                break;
            }
        }

        if(valid)
            break;

        cout << "\nInvalid input! Please enter integers only (without spaces).\n\n\n";
    }

    string reversed(num.rbegin(), num.rend());
    int reversed_num = stoi(reversed);

    cout <<"Reversed number: "<<reversed_num;


}