#include <bits/stdc++.h>

using namespace std;

vector<int> solution(int brown, int yellow) {
    
//     int sum = brown + yellow;
    
//     int w = -1, h = -1;
//     while(w == -1) {
        
//         brown -= 2;
        
//         if(sum % (brown / 2) == 0) w = brown / 2;
//     }    
//     h = sum / w;
//     vector<int> result({w, h});
    
//     return result;
    
    int sum = brown + yellow;
    
    int h = 3, w = -1;
    
    vector<int> result;
    while(1) {
        
        if(sum % h == 0) {
            w = sum / h;
            
            if((w - 2) * (h - 2) == yellow) {
                
                result.push_back(w);
                result.push_back(h);
                break;
            }
        }
        h++;
    }
    
    
    
    return result;
}