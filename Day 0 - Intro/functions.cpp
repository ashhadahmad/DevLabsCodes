#include<iostream>
using namespace std;

// Input = N (1 + 2 + 3.. N)
// Output = int

int sumOfNumbers(int n) {
    int sum = 0;
    for(int i=1; i<=n; i++) {
        sum += i;
    }
    return sum;
}

void sumOfTwoNumbers(int a, int b) {
    int c = a + b;
    cout << c;
}

int main() {
    int sum = sumOfNumbers(10);
    cout << sum << endl;

    sumOfTwoNumbers(10, 15);
}