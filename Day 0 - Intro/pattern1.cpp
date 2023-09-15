#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int i = 1;
    while(i <= n) {
        int j = 1;
        while(j <= i) {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
}

// N = 4 
// 1
// 1 2
// 1 2 3
// 1 2 3 4

// N = 4
// *
// **
// ***
// ****