#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    
    for(string s : quiz) {
        
        int a, b, c;
        char op1, op2;
        
        stringstream ss(s);
        ss >> a >> op1 >> b >> op2 >> c;
    
        if(op1== '+') {
            if(a + b == c) answer.push_back("O");
            else answer.push_back("X");
        }
        else {
            if(a - b == c) answer.push_back("O");
            else answer.push_back("X");
        }
    }

    
    
    
    return answer;
}