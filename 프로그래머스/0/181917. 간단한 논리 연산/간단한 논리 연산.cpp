#include <string>
#include <vector>

using namespace std;

bool solution(bool x1, bool x2, bool x3, bool x4) {
    bool result = false;
    
    if((x1 && x2) ||(x1 && !x2) || (!x1 && x2) ) {
        
        if( (x3 && x4) || (x3 && !x4) || (!x3 && x4) ) result = true;
        else result = false;
    }
    return result;
}