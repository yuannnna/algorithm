#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> result;
    
    for(int i=0; i<arr.size(); i++) {
        
        for(int j=0; j < arr[i]; j++) {
            result.push_back(arr[i]);
        }
    }
    return result;
}