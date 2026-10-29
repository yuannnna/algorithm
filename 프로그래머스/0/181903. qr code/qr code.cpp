#include <string>
#include <vector>

using namespace std;

string solution(int q, int r, string code) {
    string result = "";
    
    for(int i=0; i<code.size(); i++) {
        if(i % q == r) result += code[i];
    }
    return result;
}