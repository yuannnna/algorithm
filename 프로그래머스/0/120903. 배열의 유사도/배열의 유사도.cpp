#include <bits/stdc++.h>

using namespace std;

int solution(vector<string> s1, vector<string> s2) {
    
    int result = 0;
    for(auto n : s1) {
        
        auto t  = find(s2.begin(), s2.end(), n);
        
        if(t != s2.end()) result++;
    }
    
    return result;
}