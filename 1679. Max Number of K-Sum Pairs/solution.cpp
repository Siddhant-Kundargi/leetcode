#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        
        sort(nums.begin(), nums.end()); 

        int left = 0, right = nums.size() - 1; 
        int opsCounter = 0;

        int sum;

        while (left < right) {

            if (nums[right] > k) {

                right--;
                continue;
            } 

            sum = nums[left] + nums[right];

            if (nums[left] + nums[right] == k) {

                opsCounter++;
                right--;
                left++;

            } else if (nums[left] + nums[right] > k){

                right--;
            } else {

                left++;
            }
        }

        return opsCounter;
    }
};