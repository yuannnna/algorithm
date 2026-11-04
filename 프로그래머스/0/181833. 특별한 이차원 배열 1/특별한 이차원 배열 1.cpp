#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(int n) {
    vector<vector<int>> result(n, vector<int>(n,0));
    
    for(int i=0; i<n; i++) {
        // for(int j=0; j<n; j++) {
        if(i == i) result[i][i] = 1;
        // }
    }
    return result;
}