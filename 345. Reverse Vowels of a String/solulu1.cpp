#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    string reverseVowels(string s) {
        
        vector<char> vowels;
        vector<int> indices;

        string vowelString = string("aeiouAEIOU");
        
        for (int i = 0; i < s.length(); i++)
        {
            if(vowelString.find(s[i]) != string::npos){
                
                vowels.push_back(s[i]);
                indices.push_back(i);
            }
        }

        for (int i = 0; i < indices.size(); i++)
        {
            s[indices[i]] = vowels.back();
            vowels.pop_back();
        }
        return s;
    }
};