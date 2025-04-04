#include <iostream>
#include <cstdlib>
#include <ctime>
#include "calculator.h"
using namespace std;



int main() 
{
    cout<< "Addition: "<< add(5, 3)<<endl;
    cout<<"Subtraction: "<< sub(10, 4)<<endl;
    cout<< "Multiplication: "<<mult(3, 7)<<endl;
    cout<<"Division: "<< division(10, 2)<<endl;
    cout<<"Factorial of 5: " << fact(5)<<endl;
    cout<<"GCD of 56 and 98: "<<GCD(56, 98)<<endl;
    cout<<"LCM of 12 and 18: "<<LCM(12, 18)<<endl;
    cout<<"Random number between 1 and 100:"<<RNG(1,100)<<endl;

    return 0;
}


