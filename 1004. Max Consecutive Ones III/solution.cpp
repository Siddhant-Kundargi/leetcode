class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i=0,j=0;
        while(j<nums.size()){
            if(nums[j]==0){
                k--;
            }
            if(k<0){                    // if and not while coz 
                if(nums[i]==0){         // max window size is already found!
                    k++;                // we do not have to shorten the window
                }
                i++;
            }
            j++;
        }
        return j-i;
    }
};