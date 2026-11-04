#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    
    string result = "";
    for(char s : my_string) {
        for(int i=0; i<n; i++) result += s;
    }
    return result;
}