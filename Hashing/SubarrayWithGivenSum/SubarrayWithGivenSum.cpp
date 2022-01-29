#include<iostream>
#include<unordered_set>
using namespace std;;
bool subarray(int arr[] , int n,int sum) {
    unordered_set<int> h;
    int presum = 0;
    for(int i = 0 ; i < n ; i++) {
        presum += arr[i];
        if(h.find(presum - sum) != h.end())
            return true;
        if (presum == sum)
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
    int sum;
    cin >> sum;
    bool ans = subarray(arr , n , sum);
    cout << ans;
}

