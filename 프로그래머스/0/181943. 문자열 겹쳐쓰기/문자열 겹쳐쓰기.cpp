#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string overwrite_string, int s) {
    string answer = "";
    
    for(int q = 0; q<overwrite_string.length(); q++) {
        
        my_string[s] = overwrite_string[q];
        s++;
    }
    
    answer = my_string;
    return answer;
}