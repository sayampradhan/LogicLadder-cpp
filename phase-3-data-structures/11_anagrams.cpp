#include <algorithm>
#include<iostream>
#include <vector>
using namespace std;

bool isAnagram(string a, string b)
{
    int length1, length2;
    length1 = a.length();
    length2 = b.length();
    if(length1 != length2)
    {
        return false;
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
}

int main()
{
    vector<string> words;
    vector<string> anagrams;

}