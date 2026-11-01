#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> result;
    
    int l = -1, h = -1;
    for(int i=0; i<arr.size(); i++) {
        if(arr[i] == 2) {
            if(l == -1) l = i;
            h = i;
        }
    }
    
    if(l == -1) return {-1};
    
    for(int j=l; j<=h; j++) result.push_back(arr[j]);
    return result;
}