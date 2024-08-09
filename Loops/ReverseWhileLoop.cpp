#include <iostream>
using namespace std;

int main()
{

    int n = 12345;
    int result = 0;

    while (n > 0){
        int lastDig = n % 10;
        result =  result * 10 + lastDig;
        n /= 10;
    }
    cout << "Reverse = " << result << endl;
    return 0;
}