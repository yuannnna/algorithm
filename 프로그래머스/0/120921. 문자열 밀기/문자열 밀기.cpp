#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string A, string B) {
    
    string temp = A;
    for(int i=0; i<A.size(); i++) {
        
        if(temp == B) return i;
        rotate(temp.begin(), temp.end() - 1, temp.end());
        
    }
    return -1;
}