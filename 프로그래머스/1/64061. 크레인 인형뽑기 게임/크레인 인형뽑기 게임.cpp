#include <string>
#include <bits/stdc++.h>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    
    int result = 0;
    stack<int> s;
    for(int i=0; i<moves.size(); i++) {
        
        int n = moves[i] - 1;
        
        for(int j=0; j<board.size(); j++) {
            
            if(board[j][n] != 0) {
                // cout << n << "," << j;
                
                if(!s.empty() && s.top() == board[j][n]) {
                    s.pop();
                    result += 2;
                }
                else {
                    s.push(board[j][n]);
                }
                // cout << board[j][n];
                board[j][n] = 0;
                break;
            }
        }
        
    }
    return result;
}