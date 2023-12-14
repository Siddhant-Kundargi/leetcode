#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        for (int i = 1; i < k; i++)
        {
            vector<int>::iterator it;
            it = max_element(nums.begin(), nums.end());
            nums.erase(it);            
        }
        
        return *max_element(nums.begin(), nums.end());
    }
};