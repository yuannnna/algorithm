#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_prefix) {
    
    int result = 0;
    for(int i=0; i<my_string.size(); i++) {
        if(is_prefix == my_string.substr(0, i)) result = 1;
    }
    return result;
}