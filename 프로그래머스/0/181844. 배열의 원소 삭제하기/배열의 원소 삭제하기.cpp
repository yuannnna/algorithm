#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> delete_list) {
    vector<int> result;
    vector<bool> finished(1001, false);
    
    for(int n : delete_list) {
        finished[n] = true;
    }
    for(int n : arr) {
        if(!finished[n]) result.push_back(n);
    }
    return result;
}