#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list, int n) {
    
    for(int s : num_list) {
        if(s == n) return 1;
    }
    return 0;
}