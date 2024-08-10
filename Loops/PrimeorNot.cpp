#include <iostream>
#include <cmath>
using namespace std;
int main(){

    int n = 9;
    bool isPrime = true;

    for(int i = 2; i<=sqrt(n); i++) { // or (n-1) instead of sqrt(n)
        if (n % i == 0) { // i is a factor of n; i completely divides n; n is non-prime. 
            isPrime = false;
            break;
        }
    }

    if(isPrime) {
        cout << "number is prime." << endl;
    } else {
        cout << "number is NOT prime ie.(Composite Number)" << endl;
    }
    return 0;
}

