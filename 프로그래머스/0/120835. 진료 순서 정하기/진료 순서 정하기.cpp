#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> emergency) {
    
    vector<int> answer = emergency;
    
    sort(answer.rbegin(), answer.rend());
    
    vector<int> tmp;
    for(int i=0; i<answer.size(); i++) {
        tmp.emplace_back(answer[i]);
    }
    
    vector<int> result;
    for(int j=0; j<emergency.size(); j++) {
        
        for(int k=0; k<tmp.size(); k++) {
            
            if(emergency[j] == tmp[k]) result.push_back(k+1);
        }
    }
    
    return result;
}