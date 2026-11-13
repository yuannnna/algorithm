#include <string>
#include <vector>

using namespace std;

int solution(int order) {
    
    int result = 0;
    string s = to_string(order);
    
    for(auto n : s) {
        
        if((n - '0') % 3 == 0 && n != '0') result++; 
    }
    return result;
}