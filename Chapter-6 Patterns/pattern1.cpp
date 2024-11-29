#include <iostream>
using namespace std;

int main(){
    // outer loop
    for(int i = 1; i<=4; i++){
        // inner loop 
        for(int j = 1; j<=5; j++){
            cout << i << " ";     
        }
        cout << endl;
    }
    return 0;
}