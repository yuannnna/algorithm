#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(vector<string> strArr) {
    
    vector<int> array(31, 0);
    for(auto s : strArr) {
        
        array[s.size()]++;
    }
    return *max_element(array.begin(), array.end());
}