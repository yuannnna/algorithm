#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numlist, int n) {
    
    vector<pair<int,int>> vec;
    
    for(int s : numlist) {
        vec.emplace_back(s, abs(s - n));
    }

    sort(vec.begin(), vec.end(), [](pair<int, int>&a , pair<int, int>&b) {

        if(a.second == b.second) return a.first > b.first;
        else return a.second < b.second;
    });

    vector<int> result;
    for(auto p : vec) {
        result.push_back(p.first);
    }

    return result;

}