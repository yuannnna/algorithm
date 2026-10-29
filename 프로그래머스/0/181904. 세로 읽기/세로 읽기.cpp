#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int m, int c) {
    
    string result = "";
    for(int i = c - 1; i< my_string.size(); i += m) {
        
        result += my_string[i];
    }
    return result;
}