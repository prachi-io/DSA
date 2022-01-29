/// My Solution
/*
#include<iostream>
#include<unordered_set>
using namespace std;
bool pairWithSum(int arr[] , int n , int sum) {
    unordered_set<int> u(arr , arr+n);
    for(auto x : u) {
        if(u.count(sum-x) && sum != 2 * x) {
            return true;
        }
    }
    return false;
}
int main() {
    int n ;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++) {
        cin >> arr[i];
    }
    int sum;
    cin >> sum;
    bool count = pairWithSum(arr , n , sum);
    cout << count;
}*/

/// Sir
#include<iostream>
#include<unordered_set>
using namespace std;
bool pairWithSum(int arr[] , int n , int sum) {
    unordered_set<int> h;
    for(int i = 0 ; i < n ; i++) {
        if(h.find(sum-arr[i]) != h.end())
            return true;
        else
            h.insert(arr[i]);
    }
    return false;
}
int main() {
    int n ;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++) {
        cin >> arr[i];
    }
    int sum;
    cin >> sum;
    bool count = pairWithSum(arr , n , sum);
    cout << count;
}
