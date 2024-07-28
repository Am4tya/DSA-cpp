#include <iostream>
using namespace std;
int main()
{
    float eng;
    float sci;
    float math;

    cout<<"Enter english marks: ";
    cin>>eng;

    cout<<"Enter science marks: ";
    cin>>sci;

    cout<<"Enter math marks: ";
    cin>>math;

    float avg = (eng + sci + math) / 3;
    cout<<"avg marks = "<<avg<<endl;
    return 0;
}