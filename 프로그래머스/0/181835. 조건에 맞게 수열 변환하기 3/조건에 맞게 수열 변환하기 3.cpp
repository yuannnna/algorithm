#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int k) {

    if(k % 2 == 1) for(int& c : arr) c *= k;
    else for(int& c : arr) c += k;

    return arr;
}