#include <string>
#include <vector>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> result;
    
    for(int i=l; i<=r; i++) {
        
        string s = to_string(i);
        bool isOk = true;
        
        for(int j=0; j<s.size(); j++) {
            
            if(s[j] != '0' && s[j] != '5') {
                isOk = false;
                break;
            }
        }
        if(isOk) result.push_back(i);
    }
    if(result.empty()) result.push_back(-1);
    return result;
}