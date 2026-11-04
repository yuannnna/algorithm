#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> strlist) {
    vector<int> result;
    
    // int num = 0;
    for(string s : strlist) {
        
        // for(char c : s) num++;
        result.push_back(s.size());
        // num = 0;
    }
    return result;
}