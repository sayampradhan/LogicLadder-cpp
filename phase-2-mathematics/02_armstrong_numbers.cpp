#include<iostream>
#include<string>
#include<math.h>
using namespace std;

void armstrong(int num){
    int n = num;
    int sum = 0;

    while(true){
        if (n > 9){
            sum += round(pow((n % 10), 3));
            n /= 10;
        }

        if (n <= 9){
            sum += n;
            break;
        }
    }

    if (sum == 153){
        cout<<"\n"<<sum<<" is an Armstrong number.";
    }
    else{
        cout<<"\n"<<sum<<" is not an Armstrong number.";
    }

}

main(){
    int num;
    cout<<"Enter the number to check for Armstrong: ";
    cin>>num;

    armstrong(num);

    cout<<endl;
}