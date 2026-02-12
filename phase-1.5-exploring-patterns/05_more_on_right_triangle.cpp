#include<iostream>
#include<limits>
using namespace std;

// In this program we will look for more half-pyramid patterns
/*
-----------------------------------------
Pattern 1 (Already Covered)
-----------------------------------------
* *
* * *
* * * *
* * * * *
-----------------------------------------
-----------------------------------------
Pattern 2
-----------------------------------------
* * * * * *
* * * * *
* * * *
* * *
* *
*
-----------------------------------------
-----------------------------------------
Pattern 3
-----------------------------------------
        *
      * *
    * * *
  * * * *
* * * * *
-----------------------------------------
-----------------------------------------
Pattern 4
-----------------------------------------
* * * * *
  * * * *
    * * *
      * *
        *
-----------------------------------------
*/

void pattern_1(int n){
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern_2(int n){
    for(int i = n; i >= 1; i--){
        for(int j = i; j >= 1; j--){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern_3(int n) {
    for (int i = 1; i <= n; i++) {
        for (int k = 0; k < (n - i); k++) {
            cout << "  "; 
        }
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern_4(int n){
    for (int i = 0; i < n; i++){
        for (int k = 0; k < i; k++){
            cout<<"  ";
        }
        for (int j = 0; j < n - i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main(){
    int limit;
    int choice;

    cout<<"Choose from the following: \n"
    <<"1 - Pattern 1 (Right-Angled Triangle)\n"
    <<"2 - Inverted Right-Angled Triangle\n"
    <<"3 - Mirrored Right-Angled Triangle\n"
    <<"4 - Inverted Mirrored Right-Angled Triangle\n";

    cout<<"\n\nEnter your choice (1, 2, 3, or 4): \n";
    while(true){
        if (!(cin >> choice) || cin.peek() != '\n') {
            cout << "\nInvalid input! Please enter a single number (1, 2, 3, or 4): \n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else if (choice >= 1 && choice <= 4) {
            break;
        } else {
            cout << "\nOut of range! Enter 1, 2, 3, or 4: \n";
        }
    }

    cout << "\n\nYou chose pattern: " << choice << "\n\n";
    cout << "Enter the upper limit of the pattern: \n";

    while(true){
        if (!(cin >> limit)){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout<<"\n\nEnter numeric values only: \n";
        } else {
            break;
        }
    }

    cout << "\n";

    if (choice == 1) pattern_1(limit);
    else if (choice == 2) pattern_2(limit);
    else if (choice == 3) pattern_3(limit);
    else pattern_4(limit);

    return 0;
}