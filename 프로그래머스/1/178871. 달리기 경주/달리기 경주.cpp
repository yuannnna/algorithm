#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    
    vector<string> answer;
    
    unordered_map<string, int> tmp;
    
    for(int i=0; i<players.size(); i++) tmp[players[i]] = i;
    
    for(string s : callings) {
        
        int i = tmp[s];
        string front = players[i-1];
        
        swap(players[i], players[i-1]);
        tmp[s]--;
        tmp[front]++;
    }
    
    return players;
}