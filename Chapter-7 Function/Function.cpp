#include <iostream>
using namespace std;

void sayHello(){
    cout << "Hello :)\n"; // function definition
}

void assistant(){
    sayHello();
    cout << "Work done \n";
}

int main(){ 
    assistant(); 
    // sayHello(); // Function call
    // sayHello();
    // sayHello();
    return 0;
}