#include<vector>
#include<iostream>
using namespace std;

class Solution {
public:
    static bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
        int availableSpots = 0;
        bool ndLastEl = 0;
        bool stEl = 0;

        if(flowerbed.size() == 1){

            if(flowerbed[0]){

                if(n > 0){
                    return false;
                } else {
                    return true;
                }

            } else {

                if(n > 1){
                    return false;
                } else {
                    return true;
                }
            }
        }

        if((flowerbed[0] == 0) && (flowerbed[1] == 0)){

            availableSpots = 1;
            stEl = 1;

            if(flowerbed.size() < 3){

                if (n <= 1){
                    return 1;
                } else {
                    return 0;
                }
            }
        }

        for (int i = 1; i < flowerbed.size() - 1;){
            
            if(stEl){
                i++;
                continue;
            }
            
            if((flowerbed[i-1] == 0) && (flowerbed[i+1] == 0) && (flowerbed[i]) == 0){

                availableSpots += 1;
                i += 2;

                if(i == (flowerbed.size() - 2)){
                    ndLastEl = 1;
                }
            } else {

                i++;
            }
        }

        cout << "not ndLastEl " << (ndLastEl ^ 1) << endl;
        
        if((flowerbed[flowerbed.size() - 2] == 0) && (flowerbed[flowerbed.size() - 1] == 0) && (ndLastEl ^ 1)){

            availableSpots += 1;
        }

        cout << availableSpots << endl;

        if(availableSpots >= n){
            return 1;
        } else { 
            return 0;
        }
        
    }
};

int main(){

    vector<int> inp = {0,0,0,0,1};
    int n = 2;

    cout << Solution::canPlaceFlowers(inp, n) << endl;
}