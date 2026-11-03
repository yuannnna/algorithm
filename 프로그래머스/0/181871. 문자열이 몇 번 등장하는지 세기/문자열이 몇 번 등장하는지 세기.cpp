#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    
    int result = 0;
    for(int i=0; i<=myString.size()-pat.size(); i++) {
        
        if(myString.substr(i, pat.size()) == pat) result++;
    }
    return result;
}