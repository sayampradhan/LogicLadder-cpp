#include<iostream>
#include<random>
using namespace std;

/*
BUILDING A GUESSING GAME

- We take the input from the user for range of the randomly generated number.
- We let the machine generate a random number as per the user's preference.
- We let the user input a number to guess it.
    - If the number matches the random number,
        - we will say great. you guessed it right.
    - If the number is less than the random number,
        - we will say, the number is little greater.
    - If the number is greater than the random number,
        - we will say, the number is little lesser.
*/

// Function to generate a random number
int random_number_generator(int start, int end){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distr(start, end);
    return distr(gen);
}

// main function for executing the game.
main(){
    int start, end, random_number, guessed_number;
    cout<<"--------------------------------------"<<endl;
    cout<<"NUMBER GUESSING GAME...";
    cout<<"--------------------------------------"<<endl;
    cout<<endl<<endl;
    cout<<"------- ENTER A RANGE -------"<<endl;
    cout<<"Enter the starting integer: ";
    cin>> start;
    cout<<"Enter the ending integer: ";
    cin>> end;

    random_number = random_number_generator(start, end);

    cout<<endl<<"Ummm... I have thought a number between "<<start<<" and "<<end;
    cout<<endl<<"Now you guess it..."<<endl<<endl;
    cout<<
}