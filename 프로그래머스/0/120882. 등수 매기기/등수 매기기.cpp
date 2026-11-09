#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<vector<int>> score) {
    vector<int> answer;
    vector<double> sums;
    
    for(int i=0; i<score.size(); i++) {
        double sum = (score[i][0] + score[i][1]) / 2.0;
        sums.emplace_back(sum);
    }
    
    for(int j=0; j<sums.size(); j++) {
        
        int rank = 1;
        for(int k=0; k<sums.size(); k++) {
            
            if(sums[j] < sums[k]) rank++;
        }
        answer.emplace_back(rank);
    }
    
    
    return answer;
    
}