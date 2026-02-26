#include<iostream>
#include<cmath>
using namespace std;

// Printing prime numbers from 1 to N.

bool isPrime(int n){
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    int limit = sqrt(n);
    for (int i = 3; i <= limit; i += 2){
        if (n % i == 0)
        return false;
    }
    return true;
}

main(){
    int n;

    cout<<"Enter N: ";
    cin>>n;

    for (int i = 2; i <= n; i++){
        if (isPrime(i)){
            cout<<i<<" ";
        }
    }

}