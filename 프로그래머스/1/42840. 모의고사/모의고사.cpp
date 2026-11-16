#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> answers) {
    
    vector<int> v1 = {1, 2, 3, 4, 5};
    vector<int> v2 = {2, 1, 2, 3, 2, 4, 2, 5};
    vector<int> v3 = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    
    
    vector<pair<int, int>> v = { {0, 1}, {0, 2}, {0, 3}};

    for(int i=0; i<answers.size(); i++) {
        
        if(answers[i] == v1[i % 5]) v[0].first++;
        if(answers[i] == v2[i % 8]) v[1].first++;
        if(answers[i] == v3[i % 10]) v[2].first++;
    }
    
    sort(v.begin(), v.end(), [](const pair<int, int>& a, const pair<int, int>& b){
        
        if(a.first == b.first) return a.second < b.second;        
        return a.first > b.first;
    });
    
    vector<int> result;
    
    auto it = max({v[0].first, v[1].first, v[2].first});
    for(auto s : v) {
        if(it == s.first) result.emplace_back(s.second);
    }
    
    return result;
}