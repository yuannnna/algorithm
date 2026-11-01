#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> names) {
    vector<string> result;
    
    for(int i=0; i<names.size(); i+=5) result.push_back(names[i]);
    return result;
}