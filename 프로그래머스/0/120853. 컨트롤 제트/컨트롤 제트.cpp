#include <bits/stdc++.h>

using namespace std;

int solution(string s) {
    
    int sum = 0;
    string tmp = "";
    
    s += " ";
    
    int prev = 0;
    for(auto p : s) {
        
        if(p == ' ') {
            
            if(!tmp.empty()) {
                sum += stoi(tmp);
                prev = stoi(tmp);
                tmp = "";
            }
        }
        
        else if(isdigit(p) || p == '-') {
            tmp += p;
        }
        
        else sum -= prev;
    }
    return sum;
}