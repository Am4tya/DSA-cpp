#include <iostream>
using namespace std;

int main(){
    int n = 4;
    int i, j;
    // outer loop
    for(i = 1; i<=n; i++){
        int val = i;
        // inner loop 
        for(j = 1; j<=n+1; j++){
            // work 
            cout << val << " ";     
        }
        cout << endl;
    }
    cout << i << endl;
    return 0;
}