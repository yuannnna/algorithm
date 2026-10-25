#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    
    string result = "";
    for(int i=0; i<n; i++) {
        result += my_string[i];
    }
    return result;
}