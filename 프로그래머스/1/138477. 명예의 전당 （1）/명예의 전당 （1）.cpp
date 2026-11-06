#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    
    vector<int> answer;
    vector<int> result;
    
    for(int i=0; i<score.size(); i++) {
        
        answer.push_back(score[i]);
        
        sort(answer.rbegin(), answer.rend());
        
        if(answer.size() > k) answer.pop_back();
        
        result.push_back(answer.back());
    }
    
    return result;
}