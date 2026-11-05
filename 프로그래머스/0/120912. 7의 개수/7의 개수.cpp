#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    
    string s = "";
    int cnt = 0;
    for(int a : array) s += to_string(a);
    for(char c : s) if(c == '7') cnt++; 
    
    return cnt;
}