#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    
    vector<string> answer;
    
    for(int i=0; i<arr1.size(); i++) {
        
        string r1 = "";
        int count = n;
        while(count != 0) {
            
            int mod1= arr1[i] % 2;
            int mod2 = arr2[i] % 2;
            
            arr1[i] /= 2;
            arr2[i] /= 2;
                
            if(mod1 == 1 || mod2 == 1) r1 += '#';
            else r1 += ' ';
            count--;
        }
        reverse(r1.begin(), r1.end());
        answer.emplace_back(r1);
    }

    return answer;
}