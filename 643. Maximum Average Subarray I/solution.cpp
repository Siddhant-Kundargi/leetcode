#include<iostream>
#include<vector>
#include<numeric>

using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        
        double currentSum = accumulate(nums.begin(), nums.begin() + k, 0);

        double avg = currentSum / k;
        
        for (int i = k; i < nums.size(); i++) {

            currentSum = currentSum + nums[i] - nums[i - k];

            avg = max(currentSum / k, avg);
        }

        return avg;
    }
};