#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> result;
    
    string s = "";
    for(int i=0; i<my_str.size(); i++) {
        
        if(i % n == 0 && i != 0) {
            result.push_back(s);
            s = "";
        }
        s += my_str[i];
    }
    
    if(!s.empty()) result.push_back(s);
    return result;
}