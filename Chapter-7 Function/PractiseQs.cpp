#include <iostream>
using namespace std;

int prod(int a, int b){
    return a * b;
}

// even -> true; odd -> false
bool isEven(int n){
    if(n % 2 == 0){
        return true;
    } else {
        return false;
    }
}

int main(){

    cout << prod(2, 4) << endl;
    cout << isEven(19) << endl;
    return 0;
}