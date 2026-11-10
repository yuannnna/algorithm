#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <iostream>

using namespace std;

string solution(string s) {
    
    int idx = 0;
    
    for(auto&p : s) {
        
        if(p == ' ') {
            idx = 0;
            continue;
        }
        
        else if(idx % 2 == 0) p = toupper(p);
        else p = tolower(p);
        
        idx++;
    }
    return s;
}