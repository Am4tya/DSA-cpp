#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;

    // input a
    cout << "Enter a: ";
    cin >> a;

    // input b
    cout << "Enter b: ";
    cin >> b;

    // calculate sum
    int sum = a + b;
    int prod = a * b;
    int diff = a - b;
    cout << "The sum is: " << sum << endl;
    cout << "The product is: " << prod << endl;
    cout << "The difference is: " << diff << endl;
    return 0;
}