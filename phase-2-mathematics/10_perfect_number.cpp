#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Program to check if a number is a perfect number or not.
/*
    TO CHECK IT:
    1. Take the input of a number.
    2. Find all the divisors of a number.
    3. Store them into an vector array.
    4. Add all the elements of the vector array.
    5. If the sum matches the original number:
        i. Then number is perfect.
        ii. Otherwise, number is NOT perfect.
*/
void perfect_number(int n){

}

main(){
    int n = 6;
    vector<int> divisors;
    int sum = 0;
    for (int i = 1; i <= n/2; i++){
        if (n % i == 0){
            divisors.push_back(i);
        }
    }
    for (int element : divisors) {
        sum += element;
    }

    if (n == sum && n != 0) {
        cout << n << " is a Perfect number" << endl;
    } else {
        cout << n << " is NOT a Perfect number" << endl;
    }
}