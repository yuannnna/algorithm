#include <bits/stdc++.h>

using namespace std;

int solution(int n) {
    int result = 0;    
    
    string s = "";
    for(int i=1; i<=n; i++) {
        
        result++;
        
        while(result % 3 == 0 || to_string(result).find('3') != string::npos) {
            result++;
        }
        
        cout << i << "," << result << endl;
    }
    return result;
}