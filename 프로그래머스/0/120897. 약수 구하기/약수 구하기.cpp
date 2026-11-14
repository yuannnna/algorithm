#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    
    vector<int> result;
    for(int i=1; i<=n; i++) {
        if(n % i == 0) result.emplace_back(i);
    }
    return result;
}