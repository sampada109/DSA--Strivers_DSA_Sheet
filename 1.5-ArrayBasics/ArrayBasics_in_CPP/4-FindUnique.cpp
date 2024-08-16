#include<bits/stdc++.h>
using namespace std;

int findUnique(int arr[], int n){
    int ans = 0;

    for(int i=0; i<n; i++){
        ans = ans^arr[i];
    }

    return ans;
}

int main() {

    int arr[7] = {1,2,3,3,2,1,5};

    int ans = findUnique(arr,7);

    cout<<"Unique Element : "<<ans;

    return 0;
}