#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    
    int num = 0;
    for(int i=0; i<seoul.size(); i++) {
        if(seoul[i] == "Kim") num = i;
    }
    
    
    return "김서방은 " + to_string(num) + "에 있다";
}