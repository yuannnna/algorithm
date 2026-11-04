#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    
    string s = "";
    s = to_string(age);
    
    for(char& c : s) c = c + '1';
    
    return s;
}