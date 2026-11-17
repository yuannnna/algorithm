#include <bits/stdc++.h>



using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer;
    
    for(int i=0; i<prices.size(); i++) {
        
        stack<int> s;
        int tmp = prices[i];
        
        for(int j=i+1; j<prices.size(); j++) {
            
            if(prices[j] >= tmp) s.push(prices[j]);
            else {
                s.push(0);
                break;
            }
        }
        answer.emplace_back(s.size());
    }
    

    return answer;
}