#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    

    for(int j=1; j<=n; j++) {
        answer.emplace_back(j * x);
    }
        
    return answer;
}