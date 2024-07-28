#include <iostream>
using namespace std;
int main()
{
    float p, r, t;
    cout << "Enter principal: ";
    cin >> p;
    cout << "Enter rate: ";
    cin >> r;
    cout << "Enter time: ";
    cin >> t;

    float si = (p + r + t) / 100;

    cout << "SI: " << si << endl;

    return 0;
}