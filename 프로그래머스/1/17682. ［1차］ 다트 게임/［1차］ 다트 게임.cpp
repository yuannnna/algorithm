#include <string>
#include <vector>
#include <cmath>
#include <iostream>
#include <cctype>

using namespace std;

int solution(string dartResult) {
    
    int answer = 0;
    
    vector<int> num(3, 0);
    
    int idx = 0;
    
    string s = "";
    
    for(int i=0; i<dartResult.size(); i++) {
        
        int tmp = 0;
        if(idx > 3) break;
        
        if(isdigit(dartResult[i]) != 0) {
            
            if(dartResult[i] == '1' && dartResult[i + 1] == '0') {
                tmp = 10;
                i++;
            }
            else tmp = dartResult[i] - '0';
            
            num[idx] = tmp;
        }
        
        
        else if(dartResult[i] >= 'A' && dartResult[i] <= 'Z') {
            
            if(dartResult[i] == 'S') num[idx] = pow(num[idx], 1);
            else if(dartResult[i] == 'D') num[idx] = pow(num[idx], 2);
            else if(dartResult[i] == 'T') num[idx] = pow(num[idx], 3);
            
            // cout << i << "," << idx << "," << num[idx] << endl;
            idx++;
        }
        
        else {
            
            if(dartResult[i] == '*') {
                
                for(int j = idx -2; j <= idx -1; j++) {
                    
                    num[j] *= 2;
                    cout << num[j] << endl;
                }
                // cout << "----------" << endl;
            }
            
            else if(dartResult[i] == '#') {
                
                num[idx - 1] = -num[idx - 1];
            }
        }
        


    }
    
    for(auto n : num) {
        
        answer += n;
    }
    
    return answer;
}