#include<iostream>
#include<vector>
#include<numeric>

using namespace std;

class Solution {
public:
    int maxVowels(string s, int k) {
        
        vector<bool> vowelTable;
        string vowels = "aeiou";

        int maxLen = 0, currentLen = 0;

        for (int i = 0; i < s.length(); i++)
            (vowels.find(s[i]) != string::npos)?vowelTable.push_back(true):vowelTable.push_back(false);

        int newCharIndex = 0;

        for (; newCharIndex < k; newCharIndex++)
            maxLen += vowelTable[newCharIndex];

        currentLen = maxLen;

        for (; newCharIndex < s.length(); newCharIndex++){

            currentLen += vowelTable[newCharIndex];
            currentLen -= vowelTable[newCharIndex - k];

            if (currentLen > maxLen) {

                maxLen = currentLen;
            }

            if (maxLen == k){

                return maxLen;
            }
        }

        return maxLen;
    }
};

int main(){

    Solution sol = Solution();

    cout << sol.maxVowels("leetcode", 3);

    return 0;
}