#include <bits/stdc++.h>


using namespace std;

int solution(string s)
{
    
    int cnt = 0;
    
    vector<char> st;
    
    for(int i=0; i<s.size(); i++) {
        
        if(!st.empty() && st.back() == s[i]) st.pop_back();
        
        else st.push_back(s[i]);
    }
    
    
    return st.empty() ? 1 : 0;

}