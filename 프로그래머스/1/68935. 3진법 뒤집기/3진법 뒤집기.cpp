#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int solution(int n) {
    
//     int count = n;
//     string s = "";
//     while(count != 0) {
        
//         int mod = count % 3;
//         count /= 3;
//         s += to_string(mod);
//     }
//     reverse(s.begin(), s.end());
    
//     int result = 0;
//     for(int i = 0; i<s.size(); i++) {
        
//         result += (s[i] - '0') * pow(3, i);
//     }
    
    vector<int> v;
    int result = 0;
    while(n > 0) {
        v.push_back(n % 3);
        n /= 3;
    }
    
    int k = 1;
    while(!v.empty()) {
        result += k * v.back();
        v.pop_back();
        k *= 3;
    }
    
    return result;
    
}