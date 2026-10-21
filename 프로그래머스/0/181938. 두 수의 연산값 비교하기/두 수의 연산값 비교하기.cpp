#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    
    int ab = stoi(to_string(a) + to_string(b));
    int ab_2 = 2*a*b;
    
    if(ab > ab_2 || ab == ab_2) answer = ab;
    else answer = ab_2;
    
    return answer;
}