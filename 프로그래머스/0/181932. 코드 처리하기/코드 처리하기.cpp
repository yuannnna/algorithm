#include <string>
#include <vector>

using namespace std;

string solution(string code) {
    
    int mode = 0;
    string ret = "";
    
    for(int i=0; i<code.size(); i++) {
        
        if(code[i] == '1') {
            mode = 1 - mode;
        }
        else if(i % 2 == mode) {
            ret += code[i];
        }
    }
    return ret.empty() ? "EMPTY" : ret;
}