#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, vector<int> indices) {
    string result = "";
    
    sort(indices.begin(), indices.end());
    
    for(int i=0, j=0; i<my_string.size(); i++) {
        
        if(j < indices.size() && i == indices[j]) j++;
        else result += my_string[i];
    }
    return result;
}