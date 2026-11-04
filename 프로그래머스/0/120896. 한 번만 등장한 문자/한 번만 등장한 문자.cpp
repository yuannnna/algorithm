#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    
    vector<int> result(26, 0);
    string n = "";
    
    for(char c : s) result[c - 'a']++;
    
    for(int i=0; i<result.size(); i++)
        if(result[i] == 1) n += i + 'a';
    
    return n;
}
