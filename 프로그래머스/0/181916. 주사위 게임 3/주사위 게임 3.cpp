#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int solution(int a, int b, int c, int d) {
    
    vector<int> v = {a, b, c, d};
    sort(v.begin(), v.end());
    int result = 0;
    
    if(v[0] == v[3]) return result = 1111 * v[0];
    
    if(v[0] == v[2]) return result = (10 * v[0] + v[3]) * (10 * v[0] + v[3]);
    if(v[1] == v[3]) return result = (10 * v[1] + v[0]) * (10 * v[1] + v[0]);
    
    if(v[0] == v[1] && v[2] == v[3]) return result = (v[0] + v[3]) * (abs(v[3] - v[0]));
    
    if(v[0] == v[1]) return result = v[2] * v[3];
    if(v[1] == v[2]) return result = v[0] * v[3];
    if(v[2] == v[3]) return result = v[0] * v[1];
    
    return v[0];
}