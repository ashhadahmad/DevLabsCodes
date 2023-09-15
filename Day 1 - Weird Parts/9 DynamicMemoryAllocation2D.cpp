#include<iostream>
using namespace std;

int main() {
    // Create an array of pointers where each element points
    // to another array denoting the row

    int m, n;
    cin >> m >> n; // m rows and each row will have n colums;
    int **a = new int*[m];
    for(int i=0; i<m; i++) {
        a[i] = new int[n];
    }

    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            a[i][j] = 10*i + j;
        }
    }

    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }


}