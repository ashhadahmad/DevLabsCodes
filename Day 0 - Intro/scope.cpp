#include<iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 400;
    if(a == 10) {
        int a = 100;
        cout << a << endl;
        cout << b << endl;
    }
    int a = 500; 
    cout << a << endl;
}