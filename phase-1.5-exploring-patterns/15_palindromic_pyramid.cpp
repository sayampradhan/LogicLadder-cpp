#include <iostream>
using namespace std;

/*
--------------------------
PALINDROMIC NUMBER PYRAMID
--------------------------
            1 
          1 2 1
        1 2 3 2 1
      1 2 3 4 3 2 1
    1 2 3 4 5 4 3 2 1
--------------------------
*/

void palindromic_pyramid(int n){
        for (int i = 1; i <= n; i++) {
        for (int k = 1; k <= n - i; k++) {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        for (int j = i - 1; j >= 1; j--) {
            cout << j << " ";
        }

        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    palindromic_pyramid(n);

    return 0;
}