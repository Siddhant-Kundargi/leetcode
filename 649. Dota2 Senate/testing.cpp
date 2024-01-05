#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    string predictPartyVictory(string senate) {
        
        int rCount = 0, dCount = 0;
            
        for (int i = 0; i < senate.length(); i++){

            if (senate[i] == 'R'){
                if (rCount == 0)
                    dCount++;
                else
                    rCount--;
            }

            else
                if (dCount == 0)
                    rCount++;
                else
                    dCount--;
        }

        if (rCount > dCount)
            return "Dire";
        else if (dCount < rCount)
            return "Radiant";
        else
            return (senate[0] == 'R')?("Radiant"):("Dire");
    }
};