#include<iostream>
using namespace std;

bool linearSearch(int a[], int n, int k) {
    for(int i=0; i<n; i++) {
        if(a[i] == k) {
            return true;
        }
    }
    return false;
}

int main() {
    int a[1000];
    int n;
    cout << "Enter the size of array :";
    cin >> n;
    cout << "Enter the elements :";
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    int k;
    cout << "Enter the element to be searched :";
    cin >> k; // Element to be searched
    bool found = linearSearch(a, n, k);
    if(found == true) cout << "Yes\n";
    else cout << "No\n"; 
}