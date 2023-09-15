#include<iostream>
using namespace std;

int& reference_return() {
    int x = 10;
    return x;
}

void increment(int *a) {
    cout << "Memory location of increment.a :" << &a << endl;
    a++;
}

int main() {
    int a = 10;
    cout << "a before calling the function :" << a << endl;
    cout << "Memory location of main.a :" << &a << endl;
    increment(&a);
    cout << "a after calling the function :" << a << endl;
    int &b = reference_return();
}