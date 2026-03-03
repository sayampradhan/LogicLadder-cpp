#include<iostream>
using namespace std;

// Decimal to binary conversion without using builtin functions.
// I used recursion to actually calculate it.
void dec_to_bin(int num){
    if (num == 0){
        return;
    }

    dec_to_bin(num / 2);

    cout << num % 2;

}

int main(){
    
}