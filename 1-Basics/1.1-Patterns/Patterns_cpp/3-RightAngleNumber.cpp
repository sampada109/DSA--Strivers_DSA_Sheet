#include<bits/stdc++.h>
using namespace std;


void pattern(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<"\n";
    }
}

int main(){
    cout<<"Enter Row Size N : ";
    int n;
    cin>>n;

    pattern(n);

    return 0;
}