#include <iostream>
using namespace std;

int main(){

    // Qs : Print N Fibonacci Numbers
    int n = 10;
    int first = 0, sec = 1;
    cout << first << " " << sec << " ";

    for (int i = 2; i < n; i++){
        int third = first + sec;
        cout << third << " ";
        first = sec;
        sec = third;
    }

    cout << "\n";
    return 0;
}
