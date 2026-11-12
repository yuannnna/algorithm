#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    
    int odd = 0, even = 0;
    for(int n : num_list) {
        
        if(n % 2 == 0) even++;
        else odd++;
    }
    
    return vector<int> {even, odd};
}