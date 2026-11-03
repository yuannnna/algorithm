#include <string>
#include <vector>

using namespace std;

vector<int> solution(string myString) {
    
    vector<int> result;
    int n = 0;
    
    for(char& c : myString) {
        
        if(c != 'x') n++;
        
        else {
            result.push_back(n);
            n = 0;
        }
    }
    result.push_back(n);
    return result;
}