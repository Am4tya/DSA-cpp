#include <iostream>
using namespace std;

int main(){
// Multiplication of number 

    int n;
    cout << "Enter the number: ";
    cin >> n;

    for(int i = 1; i <= 10; i++){
        cout << (n * i) << " ";
    }
    cout << endl;
    return 0;
}

