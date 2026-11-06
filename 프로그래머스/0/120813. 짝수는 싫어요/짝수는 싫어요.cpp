#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> result;
    
    for(int i=1; i<=n; i+=2) {
        result.push_back(i);
    }
    return result;
}