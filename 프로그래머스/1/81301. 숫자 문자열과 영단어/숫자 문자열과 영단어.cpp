#include <string>
#include <vector>
#include <iostream>
#include <cctype>

using namespace std;

int solution(string s) {
    int answer = 0;
    
    vector<string> words = {
        "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"
    };
    
    string result = "";
    string tmp = "";
    
    for(auto c : s) {
        
        if(isdigit(c)) result += c;
        
        else {
            
            tmp += c;
            for(int i=0; i<words.size(); i++) {
                
                if(tmp == words[i]) {
                    result += to_string(i);
                    tmp = "";
                    break;
                }
            }
        }
        
    }
    
    
    return stoi(result);
}