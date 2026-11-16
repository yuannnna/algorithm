#include <string>
#include <vector>

using namespace std;

string solution(string n_str) {
    
    for(int i=0; i<n_str.size(); i++) {
        
        if(n_str[i] == '0') {
            if( n_str.find(n_str[i]) == 0 ) { n_str.erase(i, 1); i--;}
        }
        else break;
        
    }
    return n_str;
}