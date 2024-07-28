#include <iostream>
using namespace std;

int main()
{

    int a, b;
    cout << "Enter the first number: ";
    cin >> a;

    cout << "Enter the second number: ";
    cin >> b;

    if (a > b) {
        cout << "First number is larger: " << a << endl;
    } else {
        cout << "Second number is larger: " << b << endl;
    }
    return 0;
}