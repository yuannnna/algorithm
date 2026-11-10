#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int solution(int n) {
    
    int count = n;
    string s = "";
    while(count != 0) {
        
        int mod = count % 3;
        count /= 3;
        s += to_string(mod);
    }
    reverse(s.begin(), s.end());
    
    int result = 0;
    for(int i = 0; i<s.size(); i++) {
        
        result += (s[i] - '0') * pow(3, i);
    }
    
    return result;
    
}