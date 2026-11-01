#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> query) {
    vector<int> result;
    
    int start = 0, end = arr.size() - 1;
    for(int i=0; i<query.size(); i++) {
        
        if(i % 2 == 0) end = start + query[i];
        else start = start + query[i];
    }
    for(int j=start; j<=end; j++) result.push_back(arr[j]);
    return result;
}