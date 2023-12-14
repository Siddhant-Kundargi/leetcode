#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        
        vector<string> wordVector;
        bool isWord = 0;
        string tempWord = "";

        for (int i = 0  ; i < s.length(); i++){
            
            if(s[i] == ' '){

                if(isWord){

                    wordVector.push_back(tempWord);
                    tempWord = "";
                    isWord = 0;
                } else {

                    continue;
                }
            } else {

                if(isWord){

                    tempWord += s[i];
                } else {

                    tempWord += s[i];
                    isWord = 1;
                }
            }
        }

        if(isWord){

            wordVector.push_back(tempWord);
            cout << tempWord << endl;
        }

        string soln = "";
        for(auto i = wordVector.end() - 1; i != wordVector.begin(); i--){

            soln += *i;
            soln += " ";
        }

        soln += *wordVector.begin();

        cout << soln << endl;
        return soln;
        
    }
};