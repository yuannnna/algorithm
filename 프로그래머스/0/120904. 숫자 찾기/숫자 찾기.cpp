#include <bits/stdc++.h>

using namespace std;

int solution(int num, int k) {
    
    int answer = 0;
    
    string s = to_string(num);
    
    int idx = 1;
    for(auto c : s) {
        
        if(c - '0' == k) return idx;
        idx++;
    }
    
    
    return -1;
}