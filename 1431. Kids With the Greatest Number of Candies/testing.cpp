class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        vector<bool> soln;
        int maxValue = *max_element(candies.begin(), candies.end());

        for(int i = 0; i < candies.size(); i++){

            if(candies[i] + extraCandies >= maxValue){

                soln.push_back(true);
            } else {
                soln.push_back(false);
            }
        }

        return soln;
    }
};