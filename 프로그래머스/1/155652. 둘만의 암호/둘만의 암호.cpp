#include <string>
#include <vector>

using namespace std;

string solution(string s, string skip, int index) {
    
    vector<int>tmp(26, 0);
    
    for(char c : skip) tmp[c - 'a'] = 1;

    
    for(char& x : s) {
        
        int cnt = 0;
        int cur = x - 'a';
        
        while(cnt < index) {
            
            cur = (cur + 1) % 26; 
            
            if(tmp[cur] != 1) cnt++;
            
        }
        x = cur + 'a';
    }
    return s;
}