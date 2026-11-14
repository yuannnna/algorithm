#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> result(num);
    
    if(result.size() % 2 == 1) result[result.size() / 2] = total / num;
    else result[result.size()/2 -1] = total / num;
    
    
    for(int i=0; i<result.size(); i++) {
        
        if(result.size() % 2 == 1) 
            result[i] = result[result.size() / 2] - (result.size() / 2 - i);
        else
            result[i] = result[result.size() / 2-1] - (result.size() / 2 - 1 - i);
    }
    return result;
}