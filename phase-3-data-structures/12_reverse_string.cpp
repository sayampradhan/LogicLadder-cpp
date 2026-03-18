#include<iostream>
#include<string>
using namespace std;

// Function for performing reverse operation
string reverseWord(string word){
    string result;

    result = word.substr(0, word.length() - 1);

    return result;

}

int main()
{
    string word = "sam";
    string result = reverseWord(word);
    cout << result << endl;
}