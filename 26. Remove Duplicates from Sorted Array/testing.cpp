#include<vector>

using namespace std;

class Solution {
public:

    int isElementIn(int elementTofind, vector<int>& nums, int upperBound){  // checks if elements exists within the bounds

        for (int i = 0; i < upperBound; i++)
        {
            if (nums[i] == elementTofind)
            {
                return 1;
            }
        }

        return 0;
    }

    int removeDuplicates(vector<int>& nums) {
        
        int array_size = nums.size();
        int last_index = 0;

        for (int i = 0; i < array_size; i++)                // check if the next element already exists
        {
            if (isElementIn(nums[i], nums, last_index)) {   // this was a mistake as the array is already sorted !
                continue;
            } else {
                nums[last_index++] = nums[i];
            }
        }

        return last_index;
    }
};