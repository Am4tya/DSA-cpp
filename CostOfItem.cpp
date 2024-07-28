/*Question 1 : In a program, input the side of a square. You have to output the area of
the square.
Input : n (side) Output
: n*n (area)
 */

#include <iostream>
using namespace std;
int main()
{   
    float pencilcp, pencp, erasercp;
    cout<<"Enter the cost price of pencil: ";
    cin >> pencilcp;
    cout<<"Enter the cost price of pen: ";
    cin >> pencp;
    cout<<"Enter the cost price of eraser: ";
    cin >> erasercp;

    float total_cost = pencilcp + pencp + erasercp;

    cout <<"total cost price: "<< total_cost << endl;
    cout <<"total cost price with GST: " << (total_cost + (0.18 * total_cost)) << endl;
    return 0;
}