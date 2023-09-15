#include<iostream>
using namespace std;

void increment(int *a, int size) {
    for(int i=0; i<size; i++) {
        cout << a[i] << endl;
    }
}

int* address() {
    int a = 10;
    return &a;
}

int main() {
    int x = 10;
    int *ptr = &x;
    int a[] = {1,2,3,4,5};
    // cout << sizeof(a) << endl;
    int size = sizeof(a) / sizeof(int);
    // cout << x << endl;
    // increment(a + 2, size - 2);
    cout << address() << endl;
    // cout << x << endl;
}