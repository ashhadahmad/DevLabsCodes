#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if(n > 0) {
        int a = 10;
        cout << "Positive Number";
    }
    else if(n < 0) {
        cout << "Negative Number";
    }
    else if(n == 0) {
        cout << "Zero";
    }
}