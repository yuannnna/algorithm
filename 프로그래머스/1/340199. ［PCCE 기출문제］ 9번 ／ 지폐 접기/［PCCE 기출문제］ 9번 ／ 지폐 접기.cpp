#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> wallet, vector<int> bill) {

    auto max_b = *max_element(bill.begin(), bill.end());
    auto min_b = *min_element(bill.begin(), bill.end());
    
    auto max_w = *max_element(wallet.begin(), wallet.end());
    auto min_w = *min_element(wallet.begin(), wallet.end());
    
    int cnt = 0;
    while(1) {
        
        if(max_b <= max_w && min_b <= min_w) break;
        
        max_b /= 2;
        cnt++;
        if(max_b < min_b) swap(max_b, min_b);
        
    }
    
    
    return cnt;
}