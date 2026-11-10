#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<int> numbers) {
    string answer = "";
    
    vector<string> s;
    for(int n : numbers) {
        
        s.push_back(to_string(n));
    }
    
    sort(s.begin(), s.end(), [](string&a , string&b){
        
        return a + b > b + a;
    });
    
    if(s[0] == "0") return "0";
    
    string result = "";
    for(auto p : s) {
        result += p;
    }
    
    return result;
}