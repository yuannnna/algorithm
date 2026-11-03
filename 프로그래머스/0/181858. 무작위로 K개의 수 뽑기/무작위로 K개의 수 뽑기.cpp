#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> result;
    vector<bool> visited(100001, false);
    
    for(int n : arr) {
        
        if(result.size() == k) break;
        
        if(!visited[n]) {
            result.push_back(n);
            visited[n] = true;
        }
    }
    
    while(result.size() < k) result.push_back(-1);
    return result;
}