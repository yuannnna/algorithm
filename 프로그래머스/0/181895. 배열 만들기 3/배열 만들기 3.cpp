#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> intervals) {
    vector<int> result;
    
    for(int i=0; i<intervals.size(); i++) {
        int a = intervals[i][0], b = intervals[i][1];
        for(int j = a; j <= b; j++) result.push_back(arr[j]);
    }
    return result;
}