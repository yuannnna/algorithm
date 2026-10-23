#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numLog) {
    
    string result = "";
    for(int i=1; i<numLog.size(); i++) {
        
        if(numLog[i-1] < numLog[i]) {
            if(numLog[i] - numLog[i-1] == 1) result += 'w';
            else if(numLog[i] - numLog[i-1] == 10) result += 'd';
            
        }
        else if(numLog[i-1] > numLog[i]) {
            if(numLog[i-1] - numLog[i] == 1) result += 's';
            else if(numLog[i-1] - numLog[i] == 10) result += 'a';
        }
    }
    return result;
}