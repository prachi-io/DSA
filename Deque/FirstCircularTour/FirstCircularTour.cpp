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
}