// Naive solution - O(n^2)
/*
#include<iostream>
using namespace std;;
bool subarray(int arr[] , int n) {
    for(int i = 0 ; i < n ; i++) {
        int curr_sum = 0;
        for(int j = i ; j < n ; j++) {
            curr_sum += arr[j];
            if(curr_sum == 0) {
                return true;
            }
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
    bool ans = subarray(arr , n);
    cout << ans;
}*/

// efficient solution
#include<iostream>
#include<unordered_set>
using namespace std;;
bool subarray(int arr[] , int n) {
    unordered_set<int> h;
    int presum = 0;
    for(int i = 0 ; i < n ; i++) {
        presum += arr[i];
        if(h.find(presum) != h.end())
            return true;
        if (presum == 0)
            return true;
        h.insert(presum);
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
    bool ans = subarray(arr , n);
    cout << ans;
}