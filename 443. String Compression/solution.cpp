#include<vector>
#include<iostream>

using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        
        int indexCounter = 0, charCounter = 1;
        char currentChar = chars[0];

        for(int i = 1; i < chars.size(); i++){
            
            if(chars[i] == currentChar){

                charCounter++;
            } else {

                chars[indexCounter++] = currentChar;

                if (charCounter != 1){

                    string charCountString = to_string(charCounter);

                    for (int i = 0; i < charCountString.length(); i++){
                        
                        chars[indexCounter++] = charCountString[i];
                    }
                }

                charCounter = 1;
                currentChar = chars[i];
            }
        } 

        chars[indexCounter++] = currentChar;

        if (charCounter != 1){

            string charCountString = to_string(charCounter);

            for (int i = 0; i < charCountString.length(); i++){
                
                chars[indexCounter++] = charCountString[i];
            }
        }

        return indexCounter;
    }
};