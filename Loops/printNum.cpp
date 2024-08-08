#include <iostream>
using namespace std;

int main(){

    for(int i = 1; i<=5; i++) {
        cout << " " << i;
    }
    cout << endl;

    for(int i = 1; i<=10; i++) {
        cout << i << " ";
    }
    cout << endl;

    int n;
    cout << "Enter your N: ";
    cin >> n;

    for(int i = 1; i<=n; i++){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}