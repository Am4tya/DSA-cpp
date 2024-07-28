#include <iostream>
using namespace std;
int main()
{

    // single line comment
    /*  Multi
        line
        comment

     */
    int age = 25;
    float cgpa = 8.9;
    char grade = 'A';
    bool isAdult = true;
    double price = 99.9;

    cout << "size of int: " << sizeof(int) << endl; // 2 bytes in 32 bit architecture 
    cout << "size of float: " << sizeof(float) << endl;
    cout << "size of char: " << sizeof(char) << endl;
    cout << "size of bool: " << sizeof(bool) << endl;
    cout << "size of double: " << sizeof(double) << endl;
    return 0;
}