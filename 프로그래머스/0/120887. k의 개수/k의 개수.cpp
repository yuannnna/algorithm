#include <string>
#include <vector>

using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;
    
    string result = "";
    for(int q=i; q<=j; q++) result += to_string(q);
    
    char c = k + '0';
    for(char s : result) {
        if(s == c) answer++;
    }
    return answer;
}