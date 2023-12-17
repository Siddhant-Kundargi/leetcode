#include<iostream>
#include<unordered_map>

using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {

        int sl = s.length(), tl = t.length();
        
        if(sl == tl){

            unordered_map<char, char> charMap;
            vector<char> mappedCharacters;

            for (int i = 0; i < sl; i++){
                
                if(charMap.find(s[i]) != charMap.end()){

                    if(charMap[s[i]] == t[i]){

                        continue;
                    } else {

                        return false;
                    }
                } else {

                    if(find(mappedCharacters.begin(), mappedCharacters.end(), t[i]) != mappedCharacters.end()){

                        return false;
                    } else {

                        charMap[s[i]] = t[i];
                        mappedCharacters.push_back(t[i]);
                    }

                }
            }

            return true;
            
        } else {

            return false;
        }
    }
};