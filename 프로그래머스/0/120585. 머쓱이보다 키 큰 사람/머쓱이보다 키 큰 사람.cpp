#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int height) {
    
    int result = 0;
    for(int n : array) {
        
        if(n > height) result++;
    }
    return result;
}