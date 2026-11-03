#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(string myString) {
    
    vector<string> result;
    string s = "";
    
    for(char& c : myString) {
        
        if(c != 'x') s += c;
        
        else if(c == 'x' && s != "") {
            result.push_back(s);
            s = "";
        }
    }
    
    if(s != "") result.push_back(s);
    sort(result.begin(), result.end());

    return result;
}