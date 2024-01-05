#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

void printVector(vector<int> input){

    for (int i = 0; i < input.size(); i++)
        cout << input[i] << " ";

    cout << endl;
    
}

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        
        vector<int> st = {asteroids[0]};
        int current;

        for (int i = 1; i < asteroids.size(); i++){
            
            current = asteroids[i];

            cout << current << endl;

            while (!st.empty()) {
                if (current > 0 || (current < 0 && st.back() < 0)){

                    st.push_back(current);
                    break;
                }
                    
                if (abs(current) == abs(st.back())){
                    st.pop_back();
                    
                    if (st.empty() && i < asteroids.size() - 1){
                        st.push_back(asteroids[++i]);
                        break;
                    }
                    break;
                }

                if (abs(current) > abs(st.back()))
                    st.pop_back();
                else
                    break;
          
                if (st.empty()){
                    st.push_back(current);
                    break;
                }
            }
        }

        return st;
    }
};

int main() {

    Solution sol = Solution();

    vector<int> input = {1,-1,-2,-2};

    printVector(sol.asteroidCollision(input));

    return 0;
}