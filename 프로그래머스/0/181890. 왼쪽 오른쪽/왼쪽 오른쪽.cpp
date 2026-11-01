#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> str_list) {
    vector<string> result;
    
    int start = 0, end = str_list.size();
    for(int i=0; i<str_list.size(); i++) {
        if(str_list[i] == "u" || str_list[i] == "d") continue;
        
        else if(str_list[i] == "l") {end = i; break;}
        else {start = i; break;}
    }
    
    if(start == 0 && end != str_list.size()) for(int j=0; j<end; j++) result.push_back(str_list[j]);
    else for(int k=start + 1; k<end; k++) result.push_back(str_list[k]);
    
    return result;
}