// N = 4 
// 1
// 1 2
// 1 2 3
// 1 2 3 4

#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int i = 1;
    while(i <= n) {
        // cout << i << endl;
        int j = 1;
        while(j <= i) {
            cout << j << ' ';
            j++;
        }
        cout << endl;
        i++;
    }
}