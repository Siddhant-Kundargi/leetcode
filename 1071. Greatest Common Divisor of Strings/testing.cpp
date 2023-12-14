class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        
        if (str1 + str2 == str2 + str1){

            int gcdOfLengths = gcd(str1.length(), str2.length());
            return str1.substr(0, gcdOfLengths);
        }
        return "";
    }
};