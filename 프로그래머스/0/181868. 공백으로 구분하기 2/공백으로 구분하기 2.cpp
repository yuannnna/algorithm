#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    string temp = "";
    
    for(char c : my_string) {
        
        if(c == ' ' && !temp.empty()) {
            answer.push_back(temp);
            temp = "";
        }
        else if(c != ' ') {
            temp += c;
        }
    }
    
    if(!temp.empty()) answer.push_back(temp);
    return answer;
}