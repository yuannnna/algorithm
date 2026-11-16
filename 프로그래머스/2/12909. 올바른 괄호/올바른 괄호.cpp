#include <bits/stdc++.h>

using namespace std;

bool solution(string s)
{

    stack<char> st;
    
    for(auto p : s) {
        
        if(p == '(') st.push(p);
        
        if(p == ')' && st.empty()) return false;
        
        if(st.top() == '(' && p == ')') {
            st.pop();
        }
        

    }
    
    return !st.empty() ? false : true;
}