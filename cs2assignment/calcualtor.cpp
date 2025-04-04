#include <iostream>
#include "calculator.h"
#include <cstdlib>
#include <ctime>
using namespace std;

double add(double a, double b) {
    return a + b;
}

double sub(double a, double b) {
    return a - b;
}

double mult(double a, double b) {
    return a * b;
}

double division(double a, double b) {
    while (b == 0) {
        cout << "Division by zero is not allowed. Enter a nonzero divisor: ";
        cin >> b;
    }
    return a / b;
}

int fact(int a) {
    while (a < 0) {
        cout << "Factorial is not defined for negative numbers. Enter a non-negative integer: ";
        cin >> a;
    }
    int result = 1;
    for (int i = 2; i <= a; i++) {
        result *= i;
    }
    return result;
}

int GCD(int a, int b) {
    while (a <= 0 || b <= 0) {
        cout << "GCD is only defined for positive integers.\n";
        cout << "Enter first number: ";
        cin >> a;
        cout << "Enter second number: ";
        cin >> b;
    }
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int LCM(int a, int b) {
    while (a <= 0 || b <= 0) {
        cout << "LCM is only defined for positive integers.\n";
        cout << "Enter first number: ";
        cin >> a;
        cout << "Enter second number: ";
        cin >> b;
    }
    return (a * b) / GCD(a, b);
}

int GCD_Multiple() {
    int n;
    cout << "Enter the number of values: ";
    cin >> n;
    while (n < 2) {
        cout << "At least two numbers are required! Enter again: ";
        cin >> n;
    }

    int num, gcd;
    cout << "Enter number 1: ";
    cin >> gcd;

    for (int i = 2; i <= n; i++) {
        cout << "Enter number " << i << ": ";
        cin >> num;
        gcd = GCD(gcd, num);
    }
    return gcd;
}

int LCM_Multiple() {
    int n;
    cout << "Enter the number of values: ";
    cin >> n;
    while (n < 2) {
        cout << "At least two numbers are required! Enter again: ";
        cin >> n;
    }

    int num, lcm;
    cout << "Enter number 1: ";
    cin >> lcm;

    for (int i = 2; i <= n; i++) {
        cout << "Enter number " << i << ": ";
        cin >> num;
        lcm = LCM(lcm, num);
    }
    return lcm;
}

int RNG(int start, int end) {
    while (start > end) {
        cout << "Invalid range! Start should be less than or equal to end.\n";
        cout << "Enter start: ";
        cin >> start;
        cout << "Enter end: ";
        cin >> end;
    }
    return rand() % (end - start + 1) + start;
}
