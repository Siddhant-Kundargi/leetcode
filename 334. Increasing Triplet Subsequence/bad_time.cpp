#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    static bool increasingTriplet(vector<int>& nums) {

        int len = nums.size();

        if (len >= 3){
        
            for (int i = 0; i < len; i++){
                
                for (int j = i + 1; j < len; j++){
                    
                    if (nums[j] > nums[i]){

                        for (int k = j + 1; k < len; k++){
                        
                            if (nums[k] > nums[j]){

                                return true;
                            }
                        }
                    }
                }
            }

            return false;
        } else {
            
            return false;
        }
    }
};

int main(){

    vector<int> nums = {5, 4, 3, 2, 1};

    cout << Solution::increasingTriplet(nums) << endl;

    return 0;
}