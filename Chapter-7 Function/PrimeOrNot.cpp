#include <iostream>
using namespace std;

bool isPrime(int n){  // Logic 1
    if (n == 1){
        return false;
    }

    for (int i = 2; i <= n - 1; i++){
        if (n % i == 0){ // non-prime
            return false;
        }
    }
    return true;
}

bool isPrime2(int n){  // Logic 2
    if(n == 1){
        return false;
    }

    for(int i = 1; i * i <= n; i++){ 
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    cout << isPrime(11) << endl;
    cout << isPrime2(3) << endl;
    return 0;
}