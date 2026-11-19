#include <bits/stdc++.h>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 0;
    
    map<string, int> m;
    
    for(int i=0; i<clothes.size(); i++) {
        m[clothes[i][1]]++;
    }
    
    int result = 1;
    for(auto [a, b] : m) {
        
        result *= (b + 1);
    }
    
    return result - 1;
}