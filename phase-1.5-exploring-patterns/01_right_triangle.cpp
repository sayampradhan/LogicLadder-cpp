#include<iostream>
#include<limits>
using namespace std;

/*

--------------------------
RIGHT TRIANGLE
--------------------------
*
**
***
****
*****
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

int main(){

    int choice;
    int upper_limit;

    // Limit validation
    while(true){
        cout << "Enter the max. limit (positive number): ";
        cin >> upper_limit;

        if(cin.fail() || upper_limit <= 0){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid limit! Enter a positive number.\n";
            continue;
        }

        break;
    }

    cout << "\n\n";

    right_triangle(upper_limit);

    return 0;
}