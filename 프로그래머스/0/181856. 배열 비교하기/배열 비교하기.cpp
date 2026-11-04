#include <string>
#include <vector>
#include <numeric> 

using namespace std;

int solution(vector<int> arr1, vector<int> arr2) {
    
    if(arr1.size() == arr2.size()) {
        int n1 = accumulate(arr1.begin(), arr1.end(), 0);
        int n2 = accumulate(arr2.begin(), arr2.end(), 0);
        
        return n1 > n2 ? 1 : n1 < n2 ? -1 : 0;
    }
    
    else return arr1.size() > arr2.size() ? 1 : -1;
}