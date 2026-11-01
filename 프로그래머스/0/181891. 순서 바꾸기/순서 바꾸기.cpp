#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list, int n) {
    vector<int> result;
    
    for(int i=0; i<num_list.size(); i++) {
        if(i >= n) result.push_back(num_list[i]);
    }
    for(int j=0; j<n; j++) result.push_back(num_list[j]);
    return result;
}