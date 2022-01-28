/// My solution - wrong
/*#include<iostream>
using namespace std;
#include<unordered_map>
#include<unordered_set>
int NumberofElementsInIntersection(int arr1[] , int arr2[] , int n1 , int n2) {
    unordered_set<int> u1(arr1 , arr1+n1);
    unordered_set<int> u2(arr2 , arr2+n2);
    unordered_map<int , int > u;
    for(int i = 0 ; i < n1 ; i++) {
        u[arr1[i]]++;
    }
    for(int i = 0 ; i < n2 ; i++) {
        u[arr2[i]]++;
    }
    int count = 0;
    for(auto x : u) {
        if(x.second > 1) {
            count++;
        }
    }
    return count;
}
int main() {
    int n1 ;
    cin >> n1;
    int arr1[n1];
    for(int i = 0 ; i < n1 ; i++) {
        cin >> arr1[i];
    }

    int n2 ;
    cin >> n2;
    int arr2[n2];
    for(int i = 0 ; i < n2 ; i++) {
        cin >> arr2[i];
    }
    int ans = NumberofElementsInIntersection(arr1 , arr2 , n1 , n2);
    cout << ans;
}*/

// ES 1
/*
#include<iostream>
using namespace std;
#include<unordered_map>
#include<unordered_set>
int NumberofElementsInIntersection(int arr1[] , int arr2[] , int n1 , int n2) {
    unordered_set<int> u1(arr1 , arr1+n1);
    unordered_set<int> u2(arr2 , arr2+n2);
    unordered_map<int , int > u;
    int count = 0;
    for(auto x : u1) {
        if(u2.count(x)) {
            count++;
        }
    }
    return count;
}
int main() {
    int n1 ;
    cin >> n1;
    int arr1[n1];
    for(int i = 0 ; i < n1 ; i++) {
        cin >> arr1[i];
    }

    int n2 ;
    cin >> n2;
    int arr2[n2];
    for(int i = 0 ; i < n2 ; i++) {
        cin >> arr2[i];
    }
    int ans = NumberofElementsInIntersection(arr1 , arr2 , n1 , n2);
    cout << ans;
}*/

// ES 2
#include<iostream>
using namespace std;
#include<unordered_map>
#include<unordered_set>
int NumberofElementsInIntersection(int arr1[] , int arr2[] , int n1 , int n2) {
    unordered_set<int> u1(arr1 , arr1+n1);
    unordered_map<int , int > u;
    int count = 0;
    for(auto x : u1) {
        if(arr2[x]) {
            count++;
            u1.erase(x);
        }
    }
    return count;
}
int main() {
    int n1 ;
    cin >> n1;
    int arr1[n1];
    for(int i = 0 ; i < n1 ; i++) {
        cin >> arr1[i];
    }

    int n2 ;
    cin >> n2;
    int arr2[n2];
    for(int i = 0 ; i < n2 ; i++) {
        cin >> arr2[i];
    }
    int ans = NumberofElementsInIntersection(arr1 , arr2 , n1 , n2);
    cout << ans;
}