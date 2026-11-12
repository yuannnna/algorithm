#include <string>
#include <vector>

using namespace std;

string solution(string cipher, int code) {
    string result = "";
    
    for(int i=0; i<=cipher.size(); i+=code) {
        
        if(i != 0) result += cipher[i -1];
    }

    return result;
}