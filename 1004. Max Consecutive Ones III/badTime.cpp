#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {

        if (count(nums.begin(), nums.end(), 0) <= k)
            return nums.size();

        int maxCount = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++) {

            int availableZeros = k, localCount = 0, currentIndex = i;

            while (availableZeros >= 0 && currentIndex < n) {
                
                if (nums[currentIndex] == 0){

                    if (availableZeros == 0)
                        break;
                    availableZeros--;
                }

                localCount++;
                currentIndex++;
            }

            cout << maxCount << endl;
            maxCount = max(localCount, maxCount);
        }

        return maxCount;
    }
};

int main() {

    Solution sol = Solution();

    vector<int> input = {1,1,1,0,0,0,1,1,1,1,0};

    cout << sol.longestOnes(input, 2) << endl;

    return 0;
}