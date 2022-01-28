// My Solution
/*
#include<iostream>
#include<unordered_map>
using namespace std;
void frequencies(int arr[] , int n) {
    unordered_map<int , int > u;
    for(int i = 0 ; i < n ; i++) {
        if(u.find(arr[i]) == u.end()) {
            u[arr[i]] = 1;
        }
        else {
            u[arr[i]] = u[arr[i]] + 1;
        }
    }
    for(auto x : u) {
        cout << x.first << " " << x.second << endl;
    }
}
int main() {
    int n ;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++) {
        cin >> arr[i];
    }
    frequencies(arr , n);
}*/

// Sir
#include<iostream>
#include<unordered_map>
using namespace std;
void frequencies(int arr[] , int n) {
    unordered_map<int , int > u;
    for(int i = 0 ; i < n ; i++) {
        u[arr[i]]++;
    }
    for(auto x : u) {
        cout << x.first << " " << x.second << endl;
    }
}
int main() {
    int n ;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++) {
        cin >> arr[i];
    }
    frequencies(arr , n);
}