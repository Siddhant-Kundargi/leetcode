#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    string reverseVowels(string s) {

        string vowelString = string("aeiouAEIOU");
        
        for (int i = 0; i < s.length(); i++)
        {
            if(vowelString.find(s[i]) != string::npos){
                
                
            }
        }
        return s;
    }
};