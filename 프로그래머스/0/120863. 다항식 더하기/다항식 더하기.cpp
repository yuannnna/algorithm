#include <bits/stdc++.h>

using namespace std;

string solution(string polynomial) {
    
    string answer = "";
    
    stringstream ss(polynomial);
    
    string token = "";
    
    int idx1 = 0, idx2 = 0;
    while(ss >> token) {
        
        if(token == "+") continue;
        
        if(token.back() == 'x') {
            
            if(token[0] != 'x') idx1 += stoi(token.substr(0, token.size() - 1));
            
            else idx1 += 1;
        }
        
        else if(isdigit(token.back())) {
            idx2 += stoi(token);
        }
    }
    
    if(idx1 == 1 && idx2 == 0) answer = "x";
    
    else if(idx1 == 1 && idx2 != 0) answer = "x + " + to_string(idx2);
    
    else if(idx1 == 0 && idx2 != 0) answer = to_string(idx2);
    
    else if(idx1 != 0 && idx2 == 0 ) answer = to_string(idx1) + "x";
    
    else if(idx1 == 0 && idx2 == 0) answer = "";
    
    else answer = to_string(idx1) + "x" + " + " + to_string(idx2);
    

    return answer;
}