#include<iostream>
using namespace std;

// Strong Number Checker
/*
--------------------EXAMPLE-----------------------
INPUT: 145
OUTPUT: TRUE (if 1! + 4! + 5! = 145)
*/

bool strong_number(int n){
    int original_num = n;
    int sum_factorial = 0;

    while (n>0){
        int digit = n % 10;
        int factorial = 1;
        for (int i = 1; i < digit + 1; i++){
            factorial *= i;
        }
        sum_factorial += factorial;
        n /= 10;
    }
    int res = sum_factorial == original_num;
    return res;
}