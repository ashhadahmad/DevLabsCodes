#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int factorial = 1;
    int i = 2;
    while(i <= n) {
        factorial *= i;
        i++;
    }
    cout << factorial << endl;
}


// 1 + 2 + 3 + ... + N
// evenSum = 2 + 4 + ... + N
// oddSum = 1 + 3 + ... + N