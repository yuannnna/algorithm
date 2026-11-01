#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int k) {
    vector<int> result;
    
    // for(int i=1; i<=n; i++) {
    //     if(i % k == 0) result.push_back(i);
    // }
    for(int i=k; i<=n; i+=k) result.push_back(i);
    return result;
}