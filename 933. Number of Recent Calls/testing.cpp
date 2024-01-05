#include<iostream>
#include<vector>
#include<queue>

using namespace std;

class RecentCounter {
public:

    queue<int> reqQ;
    
    int ping(int t) {

        reqQ.push(t);

        while (reqQ.front() < t - 3000)
            reqQ.pop();

        return reqQ.size();
    }

    RecentCounter(){}
};