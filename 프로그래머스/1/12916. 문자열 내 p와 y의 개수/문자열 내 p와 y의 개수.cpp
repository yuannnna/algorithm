#include <string>
#include <iostream>
#include <cctype>

using namespace std;

bool solution(string s)
{
    bool answer = false;
    
    int n1 = 0, n2 = 0;
    for(auto q : s) {
        
        q = tolower(q);
        if(q == 'p') n1++;
        else if(q == 'y') n2++;
    }
    
    if(n1 == n2) answer = true;
    return answer;
}