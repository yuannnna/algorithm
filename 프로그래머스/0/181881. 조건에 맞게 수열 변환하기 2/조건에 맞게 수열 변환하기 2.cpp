#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr) {
    int result = 0;
    
    while(1) {
        
        vector<int> temp = arr;
        
        for(int i=0; i<arr.size(); i++) {
        
            if(arr[i] >= 50 && arr[i] % 2 == 0) arr[i] = arr[i] / 2;
            else if(arr[i] < 50 && arr[i] % 2 == 1) arr[i] = arr[i] * 2 + 1;
        }
        
        if(temp == arr) break;
        result++;
    }

    return result;
}