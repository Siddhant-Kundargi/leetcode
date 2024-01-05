#include<iostream>
#include<vector>
#include<map>

using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        map<int, int> m, n;

        for (int i = 0; i < arr.size(); i++)
            m[arr[i]]++;

        for (auto i = m.begin(); i != m.end(); i++)
        {
            if (!n[i->second]) {

                n[i->second] = m[i->first];
            } else {
                return false;
            }
        }

        return true;
    }
};