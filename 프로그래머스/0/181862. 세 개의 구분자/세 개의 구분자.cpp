#include <string>
#include <vector>

using namespace std;

vector<string> solution(string myStr) {
    vector<string> result;
    string tmp = "";
    
    for(char c : myStr) {
        
        if(c != 'a' && c != 'b' && c != 'c') {
            tmp += c;
        }
        else if(c == 'a' || c == 'b' || c == 'c') {
            
            if(!tmp.empty()) {
                result.push_back(tmp);
                tmp = "";
            }
        }
        
    }
    
    if(!tmp.empty()) result.push_back(tmp);
    if(result.empty()) result.push_back("EMPTY");
    return result;
}