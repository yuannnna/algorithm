#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr, int idx) {
    int result = 0;
    
    for(int i=0; i<arr.size(); i++) {
        if(i >= idx && arr[i] == 1) {
            result = i; break; }
        else result = -1;
    }
    return result;
}