#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> result;
    
    for(int i=0; i<arr.size(); i++) {
        
        if(arr[i] >= 50 && arr[i] % 2 == 0) result.push_back(arr[i] / 2);
        else if(arr[i] < 50 && arr[i] % 2 == 1) result.push_back(arr[i] * 2);
        else result.push_back(arr[i]);
    }
    return result;
}