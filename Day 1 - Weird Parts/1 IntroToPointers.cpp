#include<iostream>
using namespace std;

int main() {
    int x = 10, y = 20;
    int *ptr, *ptr2;
    ptr = &y;
    ptr2 = ptr;
    ptr = &x;
    cout << *ptr << ' ' << *ptr2 << endl;
    int* ptr3 = 0;
}