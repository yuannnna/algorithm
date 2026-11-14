#include <bits/stdc++.h>
using namespace std;

string solution(vector<int> numbers, string hand) {
    
    vector<vector<int>> num(4, vector<int>(3, 0));
    
    num = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {-10, 0, 10}};
    
    string result = "";
    
    int i = 3, j = 0, k = 3, q = 2;
    
    for(auto n : numbers) {
        
        if(n == 1 || n == 4 || n == 7) {
            result += 'L';
            
            if(n == 1) { i = 0; j = 0; }
            else if(n == 4) { i = 1; j = 0;}
            else { i = 2; j = 0; }

        }
        else if(n == 3 || n == 6 || n == 9) {
            result += 'R';
            
            if(n == 3) { k = 0; q = 2; }
            else if(n == 6) { k = 1; q = 2;}
            else { k = 2; q = 2; }
        }
        else {
            
            if(n == 2) {
                int sub_left = abs(i - 0) + abs(j - 1);
                int sub_right = abs(k - 0) + abs(q - 1);
                
                if(sub_left > sub_right) { k = 0; q = 1; result += 'R';}
                else if(sub_left < sub_right) { i = 0; j = 1; result += 'L';}
                else {
                    if(hand == "right") { k = 0; q = 1; result += 'R';}
                    else { i = 0; j = 1; result += 'L';}
                }
            }
            
            else if(n == 5) {
                int sub_left = abs(i - 1) + abs(j - 1);
                int sub_right = abs(k - 1) + abs(q - 1);
                
                if(sub_left > sub_right) { k = 1; q = 1; result += 'R';}
                else if(sub_left < sub_right) { i = 1; j = 1; result += 'L';}
                else {
                    if(hand == "right") { k = 1; q = 1; result += 'R';}
                    else { i = 1; j = 1; result += 'L';}
                }
            }
            
            else if(n == 8) {
                int sub_left = abs(i - 2) + abs(j - 1);
                int sub_right = abs(k - 2) + abs(q - 1);
                
                if(sub_left > sub_right) { k = 2; q = 1; result += 'R';}
                else if(sub_left < sub_right) { i = 2; j = 1; result += 'L';}
                else {
                    if(hand == "right") { k = 2; q = 1; result += 'R';}
                    else { i = 2; j = 1; result += 'L';}
                }
            }
            else {
                int sub_left = abs(i - 3) + abs(j - 1);
                int sub_right = abs(k - 3) + abs(q - 1);

                if(sub_left > sub_right) { k = 3; q = 1; result += 'R';}
                else if(sub_left < sub_right) { i = 3; j = 1; result += 'L';}
                else {
                    if(hand == "right") { k = 3; q = 1; result += 'R';}
                    else { i = 3; j = 1; result += 'L';}
                }
                
            }
            
            
        }
    }
    
    return result;
}