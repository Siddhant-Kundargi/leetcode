#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int numOfZeros = count(nums.begin(), nums.end(), 0);
        
        int indexToPlaceAt = 0;

        for(int i = 0; i < nums.size(); i++){
            
            if(nums[i] != 0){
                nums[indexToPlaceAt++] = nums[i];
            }
        }

        for(int i = nums.size() - numOfZeros; i < nums.size(); i++){

            nums[i] = 0;
        }
    }
};