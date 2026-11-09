#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string my_string) {
    
    int a, b;
    char op;
    stringstream ss(my_string);
    
    ss >> a;
    while(ss >> op >> b) {
        
        if(op == '+') a += b;
        else a -= b;
    }   
    
    return a;
}