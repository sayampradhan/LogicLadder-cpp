#include <algorithm>
#include<iostream>
#include <string>
using namespace std;

bool isAnagram(string a, string b)
{
    int length1 = a.length();
    int length2 = b.length();
    if(length1 != length2)
    {
        return false;
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for(int i = 0; i < length1; i++)
    {
        if(a[i] != b[i])
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}

int main()
{
    string words;
    string anagrams;

    cout<<"Enter anagram: ";
    cin>>anagrams;
    cout<<"Enter word: ";
    cin>>words;

    if (isAnagram(words, anagrams))
    {
        cout<<"The two strings are anagrams of each other.";
    }
    else
    {
        cout<<"The two strings are not anagrams of each other.";
    }
    return 0;
}