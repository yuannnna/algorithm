#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    
    int result = 0;
    vector<string> tmp{"aya", "ye", "woo", "ma"};
    
    for(string s : babbling) {
        
        bool possible = true;
        string prev = "";
        
        while(s.size() > 0) {
            
            bool matched = false;
            
            for(string t : tmp) {
                
                if(s.find(t) == 0) {
                    
                    if(t == prev) {
                        possible = false;
                        break;
                    }
                
                    prev = t;
                    s = s.substr(t.size());
                    matched = true;
                    break;
                }

            }
            if(!matched) {
                possible = false;
                break;
            }
            
            if(!possible) break;
        }
        if(s.size() == 0 && possible) result++;
    }
    return result;
}