#include<iostream>

using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        for (int i = 0; i < s.length(); i++)
        {
            int indexOfNextChar = t.find(s[i]);

            if (indexOfNextChar != string::npos){

                t = t.substr(indexOfNextChar + 1);
            } else {

                return false;
            }
        }

        return true;
    }
};