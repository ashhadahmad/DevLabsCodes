#include<iostream>
using namespace std;

void print(int a[][100], int n, int m) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
}

int main() {
    int a[100][100];
    int n = 10, m = 10;
    
    print(a, 10, 10);
}