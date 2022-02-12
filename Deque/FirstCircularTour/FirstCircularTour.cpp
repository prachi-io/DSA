/*
#include<iostream>
using namespace std;
int firstPetrolPump(int petrol[],int dist[],int n) {
    for(int start = 0 ; start < n ; start++) {
        int currPetrol = 0;
        int end = start;
        while(true) {
            currPetrol = currPetrol + (petrol[end] - dist[end]);
            if(currPetrol < 0) {
                break;
            }
            end = (end + 1) % n;
            if(end == start)
                return start + 1;
        }
    }
    return -1;
}
int main() {
    int petrol[] = {4,8,7,4};
    int dist[] = {6,5,3,5};
    int n = 4;
    int pump = firstPetrolPump(petrol,dist,n);
    cout << pump;
}*/

#include<iostream>
using namespace std;
int firstPetrolPump(int petrol[],int dist[],int n) {
    int start = 0;
    int prev_petrol = 0;
    int curr_petrol = 0;
    for(int i = 0 ; i < n ; i++) {
        curr_petrol += (petrol[i] - dist[i]);
        if(curr_petrol < 0) {
            start = i+ 1;
            prev_petrol = prev_petrol + curr_petrol;
            curr_petrol = 0;
        }
    }
    if(curr_petrol + prev_petrol >= 0) {
        return start + 1;
    }
    else {
        -1;
    }
}
int main() {
    int petrol[] = {50,10,60,100};
    int dist[] = {30,20,100,10};
    int n = 4;
    int pump = firstPetrolPump(petrol,dist,n);
    cout << pump;
}