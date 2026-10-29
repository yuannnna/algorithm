#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    
    vector<int> result;
    for(int i=0; i<intStrs.size(); i++) {
        
        int n = stoi(intStrs[i].substr(s, l));
        
        if(n > k) result.push_back(n);
    }
    return result;
}