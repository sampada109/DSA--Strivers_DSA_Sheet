#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swap(int& a, int&b){
    int temp = a;
    a = b;
    b = temp;
}

void reverseArray(int arr[], int n){
    int start = 0;
    int end = n - 1;

    while(start <= end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {

    int arr[5] = {5,4,3,2,1};
    int brr[6] = {16,15,14,13,12,11};

    reverseArray(arr,5);

    reverseArray(brr,6);

    printArray(arr,5);
    printArray(brr,6);

}