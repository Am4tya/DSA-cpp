/* Question 1 : In a program, input the side of a square. You have to output the area of
the square.
Input : n (side) Output
: n*n (area)
 */

#include <iostream>
using namespace std;
int main()
{
    float side;
    cout << "Enter the side of square: ";
    cin >> side;
    cout << "Area of square: " << side * side << endl;
    return 0;
}