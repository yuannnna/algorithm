#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string my_string) {
    
    vector<int> result;
    for(char c : my_string) {
        
        if(c >= 'a' && c <= 'z') continue;
        else result.push_back(c - '0');
    }
    
    sort(result.begin(), result.end());
    return result;
}