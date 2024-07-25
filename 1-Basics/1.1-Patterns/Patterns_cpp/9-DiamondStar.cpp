#include<bits/stdc++.h>
using namespace std;

void pattern(int n){
    // upper pyramid 
    for(int i=1; i<=n; i++){
        // left space 
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        // star 
        for(int l=1; l<=(i*2)-1; l++){
            cout<<"*";
        }
        cout<<endl;
    }

    //lower pyramid
    for(int p=n; p>0; p--){
        //left space
        for(int q=n-p; q>0; q--){
            cout<<" ";
        }
        //star
        for(int r=1; r<=(p*2)-1; r++){
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