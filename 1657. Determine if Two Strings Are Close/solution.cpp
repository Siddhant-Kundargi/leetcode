#include<iostream>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;

class Solution {
public:

    map<char, int> string2map(string s) {

        map<char, int> m;

        for (int i = 0; i < s.length(); i++)
            m[s[i]]++;

        return m;
    }

    vector<int> map2SortedVector(map<char, int> m) {

        vector<int> result;

        for (auto i : m) {

            result.push_back(i.second);
        }

        sort(result.begin(), result.end());

        return result;
    }

    bool closeStrings(string word1, string word2) {
        
        if (word1.length() != word2.length())
            return false;

        map<char, int> m = string2map(word1), n = string2map(word2);

        for (auto i = m.begin(); i != m.end(); i++)
        {
            if (i->second == n[i->first]){

                n.erase(i->first);
                m.erase(i->first);
            }
        }

        if (m.size() == n.size() && m.size() == 0)
            return true;

        vector<int> vm = map2SortedVector(m), vn = map2SortedVector(n);

        if (vm.size() != vn.size())
            return false;
        
        for (int i = 0; i < vm.size(); i++)
        {
            if (vm[i] != vn[i])
                return false;   
        }

        return true;
    }
};