#include <iostream>
#include <string>

using namespace std;
int solution(int n)
{
    string s = to_string(n);
    
    int num = 0;
    for(auto p : s) {
        num += p - '0';
    }

    return num;
}