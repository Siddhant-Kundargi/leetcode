#include<iostream>

using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {

        string soln = "";

        int w1l = word1.length();
        int w2l = word2.length();
        int sizeOfSmallerString = min(w1l, w2l);

        for (int i = 0; i < sizeOfSmallerString; i++){

            soln += word1[i];
            soln += word2[i];
        }

        if(w1l < w2l){
            
            for(int i = sizeOfSmallerString; i < w2l; i++){

                soln += word2[i];
            }
        } else if(w1l > w2l){
            
            for(int i = sizeOfSmallerString; i < w1l; i++){

                soln += word1[i];
            }
        }

        return soln;
    }
};