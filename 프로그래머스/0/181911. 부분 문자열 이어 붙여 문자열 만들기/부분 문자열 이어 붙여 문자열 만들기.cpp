#include <string>
#include <vector>

using namespace std;

string solution(vector<string> my_strings, vector<vector<int>> parts) {
    
    string result = "";
    for(int i=0; i<my_strings.size(); i++) {
        
        int s = parts[i][0];
        int e = parts[i][1];
        
        result += my_strings[i].substr(s, e - s + 1);
    }
    return result;
}