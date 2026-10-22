#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    
    int multi = 1, sum = 0;
    for(int i=0; i<num_list.size(); i++) {
        
        multi *= num_list[i];
        sum += num_list[i];
    }
    return multi < sum*sum ? 1 : 0;
}