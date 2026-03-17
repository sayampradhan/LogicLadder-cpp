#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

bool isAnagram(string a, string b)
{
    if (a.length() != b.length())
    {
        return false;
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] != b[i])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    string word;
    string anagram;

    cout << "Enter anagram: ";
    cin >> anagram;
    cout << "Enter word: ";
    cin >> word;

    if (isAnagram(word, anagram))
    {
        cout << "The two strings are anagrams of each other.";
    }
    else
    {
        cout << "The two strings are not anagrams of each other.";
    }

    return 0;
}