#include<iostream>
using namespace std;

int gcd(int a, int b){
    if (b == 0){
        return a;
    }
    return gcd(b, a % b);
}

main(){
    int a, b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    
    int result = gcd(a, b);

    cout<<"GCD of "<< a << " and " << b << " is: " << result << endl;
}