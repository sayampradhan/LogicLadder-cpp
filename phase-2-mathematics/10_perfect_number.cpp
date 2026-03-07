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
    vector<int> divisors = {};
    int sum = 0;
    int temp = 0;
    for (int i = 0; i <= n; i++){
    if (n % i == 0){
        int temp = i;
        divisors.push_back(temp);
    }
    }
}

main(){

}