#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> result;
    
    int x = n;
    result.push_back(x);
    while(x != 1) {
        if(x % 2 == 0) x /= 2;
        else if(x % 2 == 1) x = 3*x + 1;
        result.push_back(x);
    }
    return result;
}