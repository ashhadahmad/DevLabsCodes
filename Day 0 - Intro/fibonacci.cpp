#include<iostream>
using namespace std;

void fibonacci(int n) {
    int first = 0, second = 1;
    cout << first << ' ' << second << ' ';
    for(int i=3; i<=n; i++) {
        int next_number = first + second;
        cout << next_number << ' ';
        first = second;
        second = next_number;
    }
}

int main() {
    int n;
    cin >> n;
    fibonacci(n);
}