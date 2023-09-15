#include<iostream>
using namespace std;

void range(int end, int start = 1) {
    // start = 1
    for(int i=start; i<=end; i++) {
        cout << i << ' ';
        if(i == 8) {
            return;
        }
    }
    cout << endl;
}

int main() {
    range(10, 6);
    range(10);
}