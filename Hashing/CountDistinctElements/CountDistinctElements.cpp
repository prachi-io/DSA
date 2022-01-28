/*
#include<iostream>
using namespace std;
#include<unordered_set>
int main() {
    int n;
    cin >> n;
    unordered_set<int> s;
    int num;
    for(int i = 0 ; i < n ; i++) {
        cin >> num;
        s.insert(num);
    }
    cout << s.size();
}*/

#include<unordered_set>
using namespace std;
#include<iostream>
int countDistinct(int arr[] , int n) {
    unordered_set<int> s (arr,arr+n);
    return s.size();
}
int main() {
    int n ;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++) {
        cin >> arr[i];
    }
    int ans = countDistinct(arr , n);
    cout << ans;
}

// Time complexity - theta n
// Space complexity - theta n