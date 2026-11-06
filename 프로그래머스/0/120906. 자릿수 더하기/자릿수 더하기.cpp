#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    
    int result = 0;
        
    string s = to_string(n);
    
    for(char c : s) result += c - '0';
    
    return result;
}