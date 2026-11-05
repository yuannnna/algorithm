#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    
    vector<int> n(52, 0);
    
    string result = "";
    for(char s : my_string) {
        
        if(result.find(s) == string::npos) result += s;
    }
    return result;
}