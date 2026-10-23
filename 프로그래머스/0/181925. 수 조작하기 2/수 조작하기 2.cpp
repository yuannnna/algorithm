#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numLog) {
    
    string result = "";
    for(int i=1; i<numLog.size(); i++) {
        
        int val = numLog[i] - numLog[i-1];
        
        if(val == 1) result += 'w';
        else if(val == -1) result += 's';
        else if(val == 10) result += 'd';
        else result += 'a';
    }
    return result;
}