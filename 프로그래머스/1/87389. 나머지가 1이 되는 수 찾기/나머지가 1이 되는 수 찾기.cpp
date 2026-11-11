#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    int idx = 1;
    while(1) {
        
        int mod = n % idx;
    
        if(mod != 1) idx++;
        else break;
        
    }
    return idx;
}