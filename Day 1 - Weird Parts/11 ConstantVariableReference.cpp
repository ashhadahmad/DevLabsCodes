#include<iostream>
using namespace std;

int func(const int &a) {
    int calculation = 10 * a;
    return calculation;
}

int main() {
    int x = 10;
    // int const & a = x;
    cout << func(x);
    // cout << a << endl;

}