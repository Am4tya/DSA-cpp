#include <iostream>
using namespace std;

int main(){

    /* for loop syntax

    for(initialization; condition; updation){
        // do code here
    }
 
    // Loop runs while condition is true.

    */
    int i;
    for(i = 1; i <= 10; i++){
        cout << i << " ";
    }

    cout << endl;
    cout << "last value of num = " << i;
    return 0;
}