#include<bits/stdc++.h>
using namespace std;


bool linearSearch(int arr[], int n, int s){

    for(int i=0; i<n; i++){
        if(arr[i]==s){
            return true;
        }
    }

    return false;

}

int main(){

    int arr[5];

    int n = sizeof(arr)/sizeof(int);

    cout<<"Enter 5 Elements in array : "<<endl;

    // input in array
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Element to Search : "<<endl;
    int s;
    cin>>s;

    int res = linearSearch(arr, n, s);

    if(res){
        cout<<"present in array";
    }
    else{
        cout<<"not present in array";
    }

    return 0;
}