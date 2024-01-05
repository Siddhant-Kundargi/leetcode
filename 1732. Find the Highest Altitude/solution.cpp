#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    int largestAltitude(vector<int>& gain) {

        int maxHeight = 0, currentHeight = 0;

        for (int i = 0; i < gain.size(); i++){
            
            currentHeight = currentHeight + gain[i];
            maxHeight = max(maxHeight, currentHeight);
        }

        return maxHeight;
    }
};