#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_suffix) {
    
    int result = 0;
    for(int i=0; i<my_string.size(); i++) {
        if(is_suffix == my_string.substr(i)) result = 1;
    }
    return result;
}