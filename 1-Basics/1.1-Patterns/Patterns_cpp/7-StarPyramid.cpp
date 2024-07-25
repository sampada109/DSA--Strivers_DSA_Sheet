#include<bits/stdc++.h>
using namespace std;

// - - 1 - -
// - 1 2 3 -
// 1 2 3 4 5 

void pattern(int n){
    for(int i=1; i<=n; i++){

        // left space 
        for(int j=n-i; j>0; j--){
            cout<<" ";
        }

        // star 
        for(int k=1; k<=(i*2)-1; k++){
            cout<<"*";
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