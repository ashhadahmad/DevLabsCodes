#include<iostream>
#include<cstring>
using namespace std;

int len(char s[]) {
    int length = 0;
    for(int i=0; s[i] != '\0'; i++) {
        length++;
    }
    return length;
}

void reverseString(char s[]) {
    int length = len(s);
    int left = 0;
    int right = length - 1;
    while(left < right) {
        char tempchar = s[left];
        s[left] = s[right];
        s[right] = tempchar;
        left++; right--;
    }
}

int main() {
    char a[1000] = "abcd";
    char b[] = "abcd";
    // cin.getline(s, 1000);
    // cout << len(s) << endl;
    // reverseString(s);
    // cout << s << endl;
    // cout << (strcmp(a, b) == 0) << endl;
    // cout << a << endl;
    cout << strlen(b) << endl;
}