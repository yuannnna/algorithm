#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    
    for(int i=0; i<my_string.size() / 2; i++) {
        
        swap(my_string[i], my_string[my_string.size() - i - 1]);
    }
    return my_string;
}