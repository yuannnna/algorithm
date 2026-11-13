#include <string>
#include <vector>

using namespace std;

int solution(int price) {
    int answer = 0;
    
    if(price >= 100000 && price < 300000) return price * (1 - 0.05);
    
    if(price >= 300000 && price < 500000) return price * (1 - 0.1);
    
    if(price >= 500000) return price * (1 - 0.2);
    
    return price;
}