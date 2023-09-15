#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int i = 1;
    while(i <= n) {
        int space = 1;
        while(space <= n-i) {
            cout << ' ';
            space++;
        }
        int number = 1;
        while(number <= i) {
            cout << number;
            number++;
        }
        int revNum = i-1;
        while(revNum >= 1) {
            cout << revNum;
            revNum--;
        }
        cout << endl;
        i++;
    }
}

// N = 3
//   1
//  121
// 12321
// 12321
//  121
//   1

