#include<iostream>
#include<vector>

using namespace std;

class Solution {
    public:
    
    int equalPairs(vector<vector<int>>& grid) {
        int output=0;
        int len = grid[0].size();
        vector<int> colVals;
        
        for(int i=0;i<len;i++){
            for(int j=0;j<len;j++){
                colVals.push_back(grid[j][i]);
            }

            for(int j=0;j<len;j++){
                if(grid[j]==colVals){
                    output++;
                }
            }

            colVals.clear();
        }

        return output;
    }
};