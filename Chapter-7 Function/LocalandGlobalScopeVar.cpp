#include <iostream>
using namespace std;

int num = 25; // Global scope variable

void sum(int a, int b){
    cout << num << endl;
    int s = a + b;
    cout << s << endl;
}

int main(){
    sum(5, 4);
    int s = 10;
    cout << num << endl;
    cout << s << endl;
    return 0;
}