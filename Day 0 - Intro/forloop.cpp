#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i=1; i <= 10; i++) {
        if(i == 2) {
            continue;
        }
        
        if(i == 7) {
            break;
        }
        // 1 3 4 5 6
        cout << i << ' ';
    }
}
