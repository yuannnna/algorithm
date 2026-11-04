#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> rank, vector<bool> attendance) {
    
    vector<pair<int, int>> result;
    for(int i=0; i<rank.size(); i++) 
        if(attendance[i]) result.push_back({rank[i], i});
    
    sort(result.begin(), result.end());
    return 10000*result[0].second + 100*result[1].second + result[2].second;
}