#include <vector>
#include <iostream>
#include <stack>

using namespace std;

vector<int> solution(vector<int> arr) {
    
    stack<int> v;
    vector<int> result;
    
    for(int n : arr) {
        
        if(v.empty() | v.top() != n) {
            v.push(n);
            result.push_back(n);
        }
    }
    return result;
}
