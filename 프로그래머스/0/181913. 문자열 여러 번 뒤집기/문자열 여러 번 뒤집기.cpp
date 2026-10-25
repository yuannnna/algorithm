#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<vector<int>> queries) {
    
    for(int i=0; i<queries.size(); i++) {
        
        for(int j=queries[i][0], k=queries[i][1]; k > j; j++, k--) {
            swap(my_string[j], my_string[k]);
        }
    }
    return my_string;
}