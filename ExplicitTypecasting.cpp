#include <iostream>
using namespace std;

int main()
{
    float PI = 3.14;
    cout << (int)(PI) << endl;
    cout << ((float)10 / 3) << endl; // 3.3333
    cout << (char)('A' + 2) << endl; // C

    cout << ((bool)3 + 2) << endl;
    cout << (23.5 + 2 + 'A') << endl;
    return 0;
}