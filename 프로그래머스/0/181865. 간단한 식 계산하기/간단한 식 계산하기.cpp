#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string binomial) {
    
//     stringstream ss(binomial);
    
//     string word;
//     vector<string> result;
//     while(ss >> word) {
//         result.push_back(word);
//     }
    int a, b;
    char op;
    
    stringstream ss;
    ss.str(binomial);
    
    ss >> a >> op >> b;
    
    if(op == '+') return a + b;
    else if(op == '-') return a - b;
    else return a * b;
    
}