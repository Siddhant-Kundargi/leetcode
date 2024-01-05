#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        if (nums.size() < 2) {

            return 0;
        }
        
        int sol = nums.size();
        
        vector<int> leftSum = {nums[0]};

        for (int i = 1; i < nums.size(); i++)
            leftSum.push_back(leftSum[i-1] + nums[i]);

        int rightSum = 0;

        if (leftSum[nums.size() - 2] == 0) 
            sol = nums.size() - 2;

        for (int i = nums.size() - 2; i > 0; i--)
        {
            rightSum += nums[i + 1];

            if (rightSum == leftSum[i - 1])
                sol = min(sol, i);
        }

        rightSum += nums[1];

        if (rightSum == 0)
            return 0;
        
        if (sol != nums.size())
            return sol;

        return -1;
    }
};

int main() {

    Solution sol = Solution();

    vector<int>input = {-1,-1,0,1,1,-1};

    int output = sol.pivotIndex(input);

    cout << output << endl;

    return 0;
}