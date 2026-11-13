#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<vector<int>> board) {
    
    int total = board.size() * board.size();
    
    vector<pair<int,int>> st;
    
    for(int i=0; i<board.size(); i++)
        for(int j=0; j<board[0].size(); j++)
            
            if(board[i][j] == 1) st.push_back({i, j});
    
    
    
    if(st.size() == total) return 0;
    
    vector<vector<bool>> visited(total, vector<bool>(total, false));
    
    int cnt = 0;
    for(auto [x, y] : st) {
        
        for(int k=x-1; k<=x+1; k++) {
            
            for(int q=y-1; q<=y+1; q++) {
                
                if(k >=0 && q >=0 &&  k<board.size() && q <board.size()) {
                    
                    if(!visited[k][q]) {
                        visited[k][q] = true;
                        cnt++;
                    }
                    
                }
            }
        }
    }
    
    return total - cnt;
}