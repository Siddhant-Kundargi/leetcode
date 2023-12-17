#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        vector<int> soln = {1};

        int right = 1, n = nums.size();

        for (int i = 1; i < n; i++){
            
            soln.push_back(soln[i-1] * nums[i-1]);
        }
        
        for (int i = n - 1; i >= 0; i--){

            soln[i] *= right;
            right *= nums[i];
        }

        return soln;
    }
};