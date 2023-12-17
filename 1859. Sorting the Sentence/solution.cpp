#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    string sortSentence(string s) {

        string soln = "";

        for (int i = count(s.begin(), s.end(), ' '); i >= 0; i--){
            
            // find nth word
            int lastIndex = s.find('1' + i) - 1;
            soln = s[lastIndex--] + soln;

            // add the word to the output string
            while(lastIndex >= 0)
                if (s[lastIndex] != ' ' )
                    soln = s[lastIndex--] + soln;
                else 
                    break;

            // spacing
            if (i != 0)
                soln = ' ' + soln;
        }

        return soln;
    }
};

int main(){

    Solution solutionObject = Solution();
    cout << solutionObject.sortSentence("Myself2 Me1 I4 and3") << endl;
}