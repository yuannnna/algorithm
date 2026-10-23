#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    
    for(int p=0; p<queries.size(); p++) {
        
//         int val = arr[i];
//         int i = queries[p][0];
//         int j = queries[p][1];
        
//         arr[i] = arr[j];
//         arr[j] = val;
        
        swap(arr[queries[p][0]], arr[queries[p][1]]);
    }
    return arr;
}