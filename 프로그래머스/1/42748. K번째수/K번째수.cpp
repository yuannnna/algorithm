#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> com) {
    
    vector<int> result;
    for(int i=0; i<com.size(); i++) {
        
        vector<int> sub(array.begin() + com[i][0] - 1, array.begin() + com[i][1]);
        sort(sub.begin(), sub.end());

        result.push_back(sub[com[i][2] - 1]);
    }
    
    return result;
}