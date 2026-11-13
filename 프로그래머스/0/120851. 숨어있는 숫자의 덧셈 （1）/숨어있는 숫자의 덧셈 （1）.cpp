#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    
    int result = 0;
    for(auto c : my_string) {
        
        if(isdigit(c)) result += c - '0';
    }
    return result;
}