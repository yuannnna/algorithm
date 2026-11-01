#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int result = 0;
    
    if(num_list.size() >= 11) 
        for(int i=0; i<num_list.size(); i++) result += num_list[i];
    else {
        result = 1;
        for(int j=0; j<num_list.size(); j++) result *= num_list[j];
    }

    return result;
}