#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> picture, int k) {
    
    vector<string> result;
    for(string& s : picture) {
        
        string temp = "";
        for(char& c : s) {
            temp += string(k, c);
        }
        s = temp;
        
        // for(string& n : s) {
        for(int i=0; i<k; i++) result.push_back(s);
        // }
    }
    
    return result;
}