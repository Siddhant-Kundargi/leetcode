#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int num2Counter = 0;
        int total = m + n;

        if (n == 0){
            
            return;
        }

        if (m == 0){

            for (int i = 0; i < n; i++)
            {
                nums1[i] = nums2[i];
            }

            return;
        }

        for (int i = 0; i < m; i++){
            
            if (nums1[i] < nums2[num2Counter] || m == total){

                continue;
            } else {

                nums1.insert(nums1.begin() + i, nums2[num2Counter++]);
                nums1.pop_back();
                i--;
                m++;

                if (m == total){

                    return;
                }
            }
        }

        if (m != total){

            for (int i = num2Counter; i < n; i++){

                nums1[m++] = nums2[i];
            }
        }
    }
};