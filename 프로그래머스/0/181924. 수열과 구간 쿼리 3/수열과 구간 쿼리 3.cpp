#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    
    for(int p=0; p<queries.size(); p++) {
        
        int val = 0;
        int i = queries[p][0];
        int j = queries[p][1];
        
        val = arr[i];
        arr[i] = arr[j];
        arr[j] = val;
    }
    return arr;
}