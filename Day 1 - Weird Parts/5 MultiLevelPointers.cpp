#include<iostream>
using namespace std;

int main() {
    int a = 10;
    int *ptr = &a;
    int **ptr2 = &ptr;

    // cout << ptr << endl;   
    // cout << &ptr << endl;
    cout << a << ' ' << ptr << ' ' << ptr2 << endl;
    cout << &a << ' ' << &ptr << ' ' << &ptr2 << endl;
    cout << a << ' ' << *ptr << ' ' << **ptr2 << endl;
    (**ptr2)++;
    cout << a << endl;
}