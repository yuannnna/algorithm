#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array, int n) {
    
    int min = 101;
    int result = 0;
    
    for(int i=0; i<array.size(); i++) {
        
        int dx = abs(n - array[i]);
        
        if(dx < min) {
            min = dx;
            result = array[i];
        }
        if(dx == min && array[i] < result) result = array[i];
    }
    
    // sort(result.begin(), result.end());
    
    return result;
}