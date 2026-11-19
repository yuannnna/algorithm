#include <bits/stdc++.h>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    
    
    multimap<string, int> m;
    
    for(auto p : participant) {
        m.insert({p, 0});
    }
    
    for(auto c : completion) {
        
        auto it = m.find(c);
        if(it != m.end()) m.erase(it);
    }
    
    
    return m.begin() -> first;
}