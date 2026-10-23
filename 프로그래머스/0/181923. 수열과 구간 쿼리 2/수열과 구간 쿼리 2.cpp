#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    
    vector<int> result;
    
    for(int i=0; i<queries.size(); i++) {
        int s = queries[i][0];
        int e = queries[i][1];
        int k = queries[i][2];
        
        int min = -1;
        for(int j=s; j<=e; j++) {
            
            if(arr[j] > k){    
                if(min == -1 || arr[j] < min){
                    min = arr[j];
                }
            }
        }
        result.push_back(min);
        
    }
    return result;
    
}
