#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    
    vector<int> result;
    bool checked;
    
    for(string s : targets) {
        
        int sum = 0;
       bool possible = true;
        for(char c : s) {
            
            // bool possible = true;
            
            int min = 101;

            for(string k : keymap) {
                
                int n;

                if(k.find(c) == string::npos) continue;
                

                if(k.find(c) != string::npos) {
                    n = k.find(c) + 1;
                }
                
                if(n < min) {
                    min = n;
                }
                
            }
            
            if(min != 101) sum += min;
            else {
                possible = false;
                break;
            }
        }
        
        if(possible)result.push_back(sum);
        else result.push_back(-1);
    }
    return result;
}