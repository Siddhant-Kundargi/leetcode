class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {

        for(auto i = operations.begin(); i != operations.end(); ++i){

            vector<int> v = *i;
            
            for(auto j = nums.begin(); j != nums.end(); ++j){

                if(v[0] == *j){

                    *j = v[1];
                    break;
                }
            }
        }

        return nums;
    }
};