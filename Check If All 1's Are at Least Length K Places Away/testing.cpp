class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        
        auto lastOneIndex = nums.begin();

        auto i = nums.begin();

        for(; i != nums.end(); ++i){

            if (*i == 1){

                lastOneIndex = i;
                break;
            }
        }

        if(i == nums.end()){

            return true;
        }

        for(++i; i != nums.end(); ++i){
            
            if (*i == 1){

                if ((i - lastOneIndex) <= k){
                    
                    return false;
                }

                lastOneIndex = i;
            }
        }

        return true;
    }
};