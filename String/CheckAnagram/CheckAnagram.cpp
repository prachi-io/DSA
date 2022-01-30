/// My solution
#include<iostream>
using namespace std;
#include<unordered_map>
bool checkAnagram(string &s1 , string &s2 , int n1 , int n2) {
    if(n1 != n2) {
        return false;
    }
    else {
        unordered_map<char , int> u1;
        for(int i = 0 ; i < n1 ; i++) {
            if(u1.count(s1[i]))
                u1[s1[i]]++;
            else
                u1[s1[i]] = 1;
        }
        for(int i = 0 ; i < n2 ; i++) {
            if(u1.count(s2[i]) == 0) {
                return false;
            }
            else {
                (u1[s2[i]])--;
            }
        }
        for(auto x : u1) {
            if(((x.second) ) != 0) {
                return false;
            }
        }
        return true;
    }
}
int main() {
    string s1 , s2;
    cin >> s1 >> s2;
    bool ans = checkAnagram(s1 , s2 , s1.length() , s2.length());
    cout << ans;
}

/// Sir
/*
#include<iostream>
using namespace std;
#include<unordered_map>
const int CHAR = 256;
bool checkAnagram(string &s1 , string &s2) {
    if(s1.length() != s2.length())
        return false;
    int count [CHAR] = {0};
    for(int i = 0 ; i < s1.length() ; i++) {
        count[s1[i]]++;
        count[s2[i]]--;
    }
    for (int i = 0 ; i < CHAR ; i++) {
        if(count[i] != 0) {
            return false;
        }
    }
    return true;
}
int main() {
    string s1 , s2;
    cin >> s1 >> s2;
    bool ans = checkAnagram(s1 , s2);
    cout << ans;
}*/
