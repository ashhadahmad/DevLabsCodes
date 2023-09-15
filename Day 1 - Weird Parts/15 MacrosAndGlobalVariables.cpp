#include<iostream>
#define PI 3.14
using namespace std;

// Global
int a = 10;

void func() {
    a++;
}

int main() {
    cout << a << endl;
    func();
    cout << a << endl;
}