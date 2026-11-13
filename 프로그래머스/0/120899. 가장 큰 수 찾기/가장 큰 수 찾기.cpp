#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;
    
    int max = -1, idx = -1;
    for(int i=0; i<array.size(); i++) {
        
        if(max < array[i]) {
            max = array[i];
            idx = i;
        }
    }
    
    
    return vector<int> {max, idx};
}