#include<iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    int a[10000];

    double da[10];
    char ca[10];
    // cin >> a[0]; // ... a[9] - 0,1,2,3,4,5,6,7,8,9
    // cin >> a[1];
    // cin >> a[2];
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }

    for(int i=0; i<n; i++) {
        cout << a[i] << ' ';
    }
}