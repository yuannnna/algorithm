#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string letter) {
    string answer = "";
    
    char c = letter[0];
    
    for(auto n : my_string) {
        if(n != c) answer += n;
    }
    
    return answer;
}