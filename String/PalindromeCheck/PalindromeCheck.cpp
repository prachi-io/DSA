/// First Solution
/*
#include<iostream>
using namespace std;
int main() {
    string s;
    getline(cin , s);
    int len = s.length() - 1;
    int i = 0;
    bool palindrome = true;
    while(i < len) {
        if(s[i] != s[len]) {
            palindrome = false;
            break;
        }
        i++;
        len--;
    }
    cout << palindrome;
}*/

/// Second Solution
// theta n - time and space
/*#include<iostream>
#include<string>
#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    getline(cin , s);
    string s1 = s;
    reverse(s.begin() , s.end());
    if(s1 == s) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
}*/


