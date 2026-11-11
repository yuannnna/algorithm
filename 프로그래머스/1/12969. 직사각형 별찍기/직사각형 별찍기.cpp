#include <iostream>

using namespace std;

int main(void) {
    
    int n, m;
    cin >> n >> m;
    
    for(int i=1; i<=m; i++) {
        for(int i=1; i<=n; i++) cout << "*";
        cout << endl;
    }
    
    return 0;
}