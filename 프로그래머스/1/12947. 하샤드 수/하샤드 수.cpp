#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool solution(int x) {
    
    string s = to_string(x);
    
    int sum = 0;
    for(auto c : s) {
        sum += c - '0';
    }
    
    if(x % sum == 0) return true;
    return false;
}