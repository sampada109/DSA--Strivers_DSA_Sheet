#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}

void alternate(int arr[], int n){
    int i = 0;

    while(i+1 < n){
        swap(arr[i],arr[i+1]);
        i += 2;
    }
}

int main() {

    int arr[5] = {1,2,3,4,5};
    int brr[6] = {1,2,3,4,5,6};

    alternate(arr,5);
    alternate(brr,6);

    printArray(arr,5);
    printArray(brr,6);

    return 0;
}