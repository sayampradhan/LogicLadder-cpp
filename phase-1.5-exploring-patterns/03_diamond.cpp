#include<iostream>
#include<limits>
using namespace std;

/*
--------------------------
TO PRINT PATTERNS
--------------------------
- Right Triangle
- Pyramid
- Diamond
--------------------------

--------------------------
RIGHT TRIANGLE
--------------------------
*
**
***
****
*****
---------------------------
---------------------------
PYRAMID
---------------------------
   *
  ***
 *****
******* 
---------------------------
---------------------------
DIAMOND
---------------------------
   *
  ***
 *****
*******
*******
 *****
  ***
   *
---------------------------

*/

void right_triangle(int limit){
    for (int i = 1; i <= limit; i++){
        for (int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
}

void pyramid(int limit){
    for (int i = 1; i <= limit; i++){
        
        // Print spaces
        for (int space = 1; space <= limit - i; space++){
            cout << " ";
        }

        // Print stars
        for (int star = 1; star <= (2*i - 1); star++){
            cout << "*";
        }

        cout << endl;
    }
}

void diamond(int limit){

    // Upper pyramid
    for (int i = 1; i <= limit; i++){
        for (int space = 1; space <= limit - i; space++){
            cout << " ";
        }

        for (int star = 1; star <= (2*i - 1); star++){
            cout << "*";
        }

        cout << endl;
    }

    // Lower inverted pyramid
    for (int i = limit; i >= 1; i--){
        for (int space = 1; space <= limit - i; space++){
            cout << " ";
        }

        for (int star = 1; star <= (2*i - 1); star++){
            cout << "*";
        }

        cout << endl;
    }
}

int main(){

    int choice;
    int upper_limit;

    cout << "PROGRAM TO PRINT *DIAMOND*\n\n";

    // Limit validation
    while(true){
        cout << "\nEnter the max. limit (positive number): ";
        cin >> upper_limit;

        if(cin.fail() || upper_limit <= 0){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid limit! Enter a positive number.\n";
            continue;
        }

        break;
    }

    cout<<"\n\n";

    diamond(upper_limit);

    return 0;
}