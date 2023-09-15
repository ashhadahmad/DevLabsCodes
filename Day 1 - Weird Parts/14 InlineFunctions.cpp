#include<iostream>
using namespace std;

inline int sum(int a, int b) {
    return a + b;
}

int bigger(int a, int b) {
    if(a > b) return a;
    else return b;
}

int main() {
    cout << sum(1,2) << endl;
    int a = 10, b = 20;
    int bigger = (a > b) ? a : b; 
    cout << bigger << endl;
}