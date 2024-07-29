#include <iostream>
using namespace std;

int main()
{
    int a, b;
    char op;

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter Operator: ";
    cin >> op;

    if (op == '+'){
        cout << "a + b = " << (a + b) << endl;
    }
    else if (op == '-'){
        cout << "a - b = " << (a - b) << endl;
    }
    else if (op == '*'){
        cout << "a * b = " << (a * b) << endl;
    }
    else if (op == '/'){
        cout << "a / b = " << (a / b) << endl;
    }
    else{
        cout << "Invalid Operator";
    }

    // We can do it using switch() as well.

    switch (op){
    case '+':
        cout << "a + b = " << (a + b) << endl;
        break;
    case '-':
        cout << "a - b = " << (a - b) << endl;
        break;
    case '*':
        cout << "a * b = " << (a * b) << endl;
        break;
    case '/':
        cout << "a / b = " << (a / b) << endl;
        break;
    default : cout << "Invalid Operator";
    }
    return 0;
}
