#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    
    
    for(auto& c : s) {
        if(c == ' ') continue;
        
        
        if(c >= 'a' && c <= 'z') c = (c + n - 'a') % 26 + 'a';
        else c = (c + n -'A') % 26 + 'A';
    }
    
    
    return s;
}