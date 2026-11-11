#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

string solution(string letter) {
    string result = "";
    
    vector<string> mos = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",
                          ".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    
    
    string tmp = "";
    for(int i=0; i<letter.size(); i++) {
        
        if(letter[i] == ' ') {
            
            auto num = find(mos.begin(), mos.end(), tmp);
            
            char c = distance(mos.begin(), num) + 'a';
            
            result += c;
            
            tmp = "";
            continue;
        }
        
        tmp += letter[i];
    }
    
    if(!tmp.empty()) {
        auto nu = find(mos.begin(), mos.end(), tmp);
        
        char d = distance(mos.begin(), nu) + 'a';
        result += d;

    }
    
    
    return result;
}