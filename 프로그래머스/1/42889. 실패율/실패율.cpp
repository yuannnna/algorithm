#include <bits/stdc++.h>

using namespace std;

vector<int> solution(int N, vector<int> stages) {
    
    vector<int> s(N, 0);
    
    int num = stages.size();
    
    for(int i=0; i<num; i++) {
        
        if(stages[i] - 1 < N) {
            s[stages[i] - 1]++;
        }
    }
    
    vector<pair<double, int>> v(N);
    for(int j=0; j<N; j++) {
        
        double fail = 0.0;
        
        if(num > 0) {
            fail = (double)s[j] / num;
        }
        
        v[j].first = fail;
        v[j].second = j + 1;
       
        num -= s[j];
    }
    
    sort(v.begin(), v.end(), [](const auto& a, const auto& b){
        if(a.first != b.first) return a.first > b.first;
        return a.second < b.second;
        
    });
    
    vector<int> result;
    for(auto [a, b] : v) {
        result.emplace_back(b);
    }
    
    
    
    
    
    return result;
}