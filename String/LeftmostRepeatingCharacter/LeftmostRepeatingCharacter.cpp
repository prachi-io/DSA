/// Naive Approach
// O(n^2)
/*
#include<iostream>
using namespace std;
int leftMost(string &s) {
    for(int i = 0 ; i < s.length(); i++) {
        for(int j = i + 1 ; j < s.length() ; j++) {
            if(s[i] == s[j])
                return i;
        }
    }
    return -1;
}
int main() {
    string s1;
    cin >> s1;
    int ans = leftMost(s1);
    cout << ans;
}*/

/// Better Approach
/*
#include<iostream>
using namespace std;
const int CHAR = 256;
int leftMost(string &s) {
    int count[CHAR] = {0};
    for(int i = 0 ; i < s.length() ; i++) {
        count[s[i]]++;
    }
    for(int i = 0 ; i < s.length() ; i++) {
        if(count[s[i]] > 1) {
            return i;
        }
    }
    return -1;
}
int main() {
    string s1;
    cin >> s1;
    int ans = leftMost(s1);
    cout << ans;
}*/

/// best solution
#include<iostream>
using namespace std;
const int CHAR = 256;
int leftMost(string &s) {
    int fIndex[CHAR];
    fill(fIndex , fIndex + CHAR , -1);
    int res = INT_MAX;
    for(int i = 0 ; i < s.length() ; i++) {
        int fi = fIndex[s[i]];
        if(fi == -1) {
            fIndex[s[i]] = i;
        }
        else {
            res = min(res , fi);
        }
    }
    return (res == INT_MAX) ? -1 : res;
}
int main() {
    string s1;
    cin >> s1;
    int ans = leftMost(s1);
    cout << ans;
}