#include <string>
#include <vector>

using namespace std;

string solution(string rny_string) {
    string result = "";
    
    for(int i=0; i<rny_string.size(); i++) {
        if(rny_string[i] == 'm') result += "rn";
        else result += rny_string[i];
    }
    return result;
}