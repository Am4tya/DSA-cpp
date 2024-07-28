/*Question 4 : Write a program to calculate the area of a circle.
Input : r (radius)
Output : PI*r*r (area)
*/

#include <iostream>
#define PI 3.14
using namespace std;
int main()
{   
    float radius;
    cout<<"Enter the radius of circle: ";
    cin>>radius;

    float area = PI * radius * radius;
    cout<<"The area of circle is: "<<(PI * radius * radius)<<endl;
    return 0;
}