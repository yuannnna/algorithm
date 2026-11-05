#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer(2, 0);
    
    int x1 = board[0] / 2;
    int y1 = board[1] / 2;
    
    for(string s : keyinput) {
        

        if(s == "left" && answer[0] > -x1) answer[0]--;
        else if(s == "right" && answer[0] < x1) answer[0]++;
        else if(s == "up" && answer[1] < y1) answer[1]++;
        else if(s == "down" && answer[1] > -y1)answer[1]--;
    }
    return answer;
}