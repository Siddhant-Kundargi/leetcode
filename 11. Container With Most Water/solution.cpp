#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int maxVolume = 0, currentVolume;
        int left = 0; int right = height.size() - 1;

        while ( left < right ) {

            currentVolume = min(height[left], height[right]) * (right - left);

            if (currentVolume > maxVolume) {

                maxVolume = currentVolume;
            }

            if (height[left] > height[right]){

                right--;
            } else {

                left++;
            }
        }

        return maxVolume;
    }
};

int main(){

    Solution sol = Solution();

    cout << sol.maxArea({1,8,6,2,5,4,8,3,7}) << endl;

    return 0;
}