#include<iostream>
#include<random>
#include<algorithm>
#include<chrono>
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
    /*
    Earlier I wrote by myself, however, the random numbers didn't change.
    Therefore, I used AI to enhance the code for change the random number generation with each execution.
    */
    static random_device rd;
    // Combine hardware entropy with high-resolution time
    auto time_seed = chrono::high_resolution_clock::now().time_since_epoch().count();
    static mt19937 gen(rd() ^ static_cast<unsigned int>(time_seed));
    
    if (start > end) swap(start, end);
    uniform_int_distribution<> distr(start, end);
    return distr(gen);
}

// main function for executing the game.
main(){
    int start, end, random_number, guessed_number;
    cout<<"--------------------------------------"<<endl;
    cout<<"NUMBER GUESSING GAME..."<<endl;
    cout<<"--------------------------------------"<<endl;
    cout<<endl<<endl;
    cout<<"------- ENTER A RANGE --------"<<endl;
    cout<<"Enter the starting integer: ";
    cin>> start;
    cout<<"Enter the ending integer: ";
    cin>> end;
    cout<<"------------------------------"<<endl;

    random_number = random_number_generator(start, end);

    cout<<endl<<"Hmmm... I have thought a number between "<<start<<" and "<<end;
    cout<<endl<<"Now you guess it..."<<endl<<endl;
    cout<<"Enter your guess: ";
    while(true){
        cin>>guessed_number;
        if (guessed_number==random_number){
            cout<<endl<<endl<<"Ahhh... You guessed it right"<<endl;
            cout<<endl<<"My guess was "<<random_number;
            break;
        }
        if (guessed_number < random_number){
            cout<<"Ummm... The guessed number is lesser than what I have thought."<<endl;
            cout<<endl<<"Try guessing a greater number."<<endl;
        }
        if (guessed_number > random_number){
            cout<<"Ummm... The guessed number is greater than what I have thought."<<endl;
            cout<<endl<<"Try guessing a smaller number."<<endl;
        }
        cout<<endl<<"Enter again: ";
    }

}