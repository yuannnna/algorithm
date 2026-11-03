#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<bool> flag) {
    vector<int> result;
    
    for(int i=0; i<flag.size(); i++) {
        
        if(flag[i]) {
            for(int j=0; j<arr[i]*2; j++) result.push_back(arr[i]);
        }
        else {
            for(int k=0; k<arr[i]; k++) result.pop_back();
        }
    }
    return result;
}