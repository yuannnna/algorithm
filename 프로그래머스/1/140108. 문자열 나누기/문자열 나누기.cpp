#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    
    int a = 0, b = 0;
    char tmp;
    int result = 0;
    bool checked = true;

    for(int i=0; i<s.size(); i++) {
        
        if(checked) tmp = s[i];

        if(s[i] == tmp) {
            a++;
            checked = false;
        }

        else b++;

        if(a == b || i == s.size()-1) {
            result++;
            a = 0;
            b = 0;
            checked = true;
        }
    }

    return result;
}