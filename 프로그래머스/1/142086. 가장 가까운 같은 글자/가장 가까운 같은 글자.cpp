#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(string s) {
    
    vector<int> tmp(26, -1);
    vector<int> result;
    
    for(int i=0; i<s.size(); i++) {
        
        if(tmp[ s[i] - 'a' ] == -1) {
            
            result.emplace_back(-1);
            tmp[ s[i] - 'a'] = i;
        }
        else {
            
            result.emplace_back(i - tmp[ s[i] - 'a']);
            tmp[ s[i] - 'a'] = i;
        }
        
    }
    return result;
}