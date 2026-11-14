#include <bits/stdc++.h>

using namespace std;

vector<int> solution(int n, long long left, long long right) {
    
    vector<int> result;
    
    for(long long i=left; i<=right; i++) {
        
        int row = i / n;
        int col = i % n;
        
        if(row + 1 > col + 1) result.emplace_back(row + 1);
        else result.emplace_back(col + 1);
    } 
    
    return result;
}