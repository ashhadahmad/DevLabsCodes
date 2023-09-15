#include<iostream>
using namespace std;

int main() {
    char s[1000];
    cin >> s;
    // abbcdbba = a

    int occurances[130] = {0};
    for(int i=0; s[i] != '\0'; i++) {
        occurances[s[i]]++;
    }

    char bestChar = 'a';
    for(int i=0; i<130; i++) {
        if(occurances[i] > occurances[bestChar]) {
            bestChar = i;
        }
    }
    cout << bestChar << endl;
}