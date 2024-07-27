#include<bits/stdc++.h>
using namespace std;


void pattern(int n){
    for(int i=1; i<=n; i++){
        for(char c='A'; c<'A'+i; c++){
            cout<<c<<" ";
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