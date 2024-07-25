#include<bits/stdc++.h>
using namespace std;


void pattern(int n){
    // upper triangle
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    // lower
    for(int i=n-1; i>0; i--){
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main(){
    cout<<"Enter Row Size N : ";
    int n;
    cin>>n;

    pattern(n);

    return 0;
}