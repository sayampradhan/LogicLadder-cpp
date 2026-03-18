#include<iostream>
#include<string>
using namespace std;

// Function for performing reverse operation
string reverseWord(string word){
    string result = "";

    for (int i = word.length(); i > 0; i--)
    {
        result += word[i - 1];
    }

    return result;

}

int main()
{
    string word;
    cout << "Enter word: ";
    cin >> word;
    string result = reverseWord(word);
    cout << result << endl;
}