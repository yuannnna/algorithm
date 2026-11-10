#include <string>
#include <vector>
#include <iostream>
#include <unordered_map>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    
//     vector<pair<string, int>> s;
    
//     vector<int> result;
    
//     for(int i=0; i<name.size(); i++) {
        
//         s.push_back({name[i], yearning[i]});
//     }
    
//     for(auto p : photo) {
        
//         int sum = 0;
//         for(int j=0; j<p.size(); j++) {
            
//             for(int k=0; k<s.size(); k++) {
                
//                 if(s[k].first == p[j]) {
//                     sum += s[k].second;
//                     break;
//                 }
//             }
//         }
//         result.emplace_back(sum);
//     }
    
    unordered_map<string, int> m;
    vector<int> result;
    
    for(int i=0; i<name.size(); i++) {
        
        m[name[i]] = yearning[i];
    }
    
    for(auto p : photo) {
        
        int sum = 0;
        for(auto t : p) {
            sum += m[t];
        }
        result.emplace_back(sum);
    }
    
    
    
    return result;
}