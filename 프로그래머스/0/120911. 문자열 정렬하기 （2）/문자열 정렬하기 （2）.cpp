#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string) {
    
    for(char& c : my_string) {
        
        if(c >= 'A' && c <= 'Z') c = c + 32;
    }
    sort(my_string.begin(), my_string.end());
    return my_string;
}