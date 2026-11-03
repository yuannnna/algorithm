#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> result;
    string s = "";
    
    for(char c : my_string) {
        
        if(c != ' ') s += c;
        else {
            result.push_back(s);
            s = "";
        }
    }
    
    if(!s.empty()) result.push_back(s);
    return result;
    
}