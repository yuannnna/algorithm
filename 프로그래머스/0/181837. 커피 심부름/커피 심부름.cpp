#include <string>
#include <vector>

using namespace std;

int solution(vector<string> order) {
    int result = 0;
    
    for(string s : order) {
        
        if(s.find("americano") != string::npos || s.find("anything") != string::npos)
            result += 4500;
        
        else result += 5000;
    }
    return result;
}