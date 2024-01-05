#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:

    string getString(int count, string baseString){

        string output = "";
        
        for (int i = 0; i < count; i++)
            output += baseString;

        return output;
    }

    string decodeString(string s) {
        
        string stringBuilder;
        vector<string> stringStack;
        string soln;
        int last = 0;

        for (int i = 0; i < s.length(); i++){
            
            if (s[i] != ']')
            {
                stringStack += string(1, s[i]);
            } else {

                while ()
                {
                    /* code */
                }
                
            }
        }
        
    
        return soln; 
    }
};

int main(){

    Solution sol = Solution();

    cout << sol.decodeString("3[a]2[b]2[c]") << endl;
    
    return 0;
}