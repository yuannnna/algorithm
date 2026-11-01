#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> result;
    
    for(int i=0; i<strArr.size(); i++) {
        if(strArr[i].find("ad") == string::npos) result.push_back(strArr[i]);
    }
    return result;
}