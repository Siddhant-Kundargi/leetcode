#include<iostream>
#include<string>
#include<vector>

using namespace std;

void printVector(vector<char> inp){

    if(inp.size() > 0){
        for(auto i = inp.begin(); i != inp.end(); ++i){

            cout << *i << " ";
        }
        
        cout << endl;
    }
}

class Solution {
public:

    static int findCharInVector(vector<char> substring, char c){
        
        int counter = 1;
        for(auto j = substring.begin(); j != substring.end(); ++j){

            if(*j == c){

                cout << "found " << *j << " " << c << endl;
                return counter;
            }

            cout << "searching " << *j << " " << c << endl;
            counter++;
        }

        return 0;
    }

    static int lengthOfLongestSubstring(string s) {

        int maxLen = 0;
        vector<char> substring;

        for(int i = 0; i < s.length(); i++){

            int charIndex = findCharInVector(substring, s[i]);

            if(charIndex == 0){


                cout << "char not found" << endl;
                substring.push_back(s[i]);

                            
                printVector(substring);

            } else {

                charIndex = charIndex - 1;

                cout << "char found" << endl;

                if (charIndex+1 >= substring.size()){

                    substring.clear();
                    substring.push_back(s[i]);

                    printVector(substring);

                    continue;
                }

                cout << charIndex << endl;

                substring.erase(substring.begin(), substring.begin()+charIndex+1);
                substring.push_back(s[i]);

                printVector(substring);
            }

            if(substring.size() > maxLen){

                maxLen = substring.size();
            }
        }

        return maxLen;
    }
};

int main(){

    int n =  Solution::lengthOfLongestSubstring("abcabcbb");
    cout << "final ans " << n <<  endl;

    return 0;
}