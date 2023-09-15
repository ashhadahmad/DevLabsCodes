#include<iostream>
using namespace std;

int main() {
    const int a = 10;
    int const * const ptr = &a;
    cout << *ptr << endl;
    // (*ptr)++;
    // ptr++;
    // int b = 20;
    // int * const ptr = &b;
    // (*ptr)++;
    // cout << b << endl;
    // ptr = &a;
    // cout << *ptr << endl;
    // int const *ptr = &a;
    // ptr = &b;
}