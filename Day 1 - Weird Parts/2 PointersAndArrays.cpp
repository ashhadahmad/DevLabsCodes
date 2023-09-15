#include<iostream>
using namespace std;

int main() {
    int a[] = {1,2,3,4,5};
    int* ptr = &a[0];
    cout << sizeof(a) << endl;
    cout << sizeof(ptr) << endl;
}