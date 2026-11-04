#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    
    int count = 0;
    long n = num;
    
    if(n == 1) return 0;
    while(n != 1) {
        
        if(count >= 500) return -1;
        
        if(n % 2 == 0) n /= 2;
        else n = 3*n + 1;
        count++;
    }
    return count;
}