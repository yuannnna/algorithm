#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int n) {
    
    int result = 0;
    for(int i=0; i<numbers.size(); i++) 
        if(result <= n) result += numbers[i];
    
    return result;
}