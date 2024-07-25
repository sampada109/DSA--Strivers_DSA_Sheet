#include<bits/stdc++.h>
using namespace std;


void pattern(int n){
    for(int i=n; i>0; i--){

        // left space 
        for(int l=1; l<=n-i; l++){
            cout<<" ";
        }
        
        // star
        for(int j=1; j<=(i*2)-1; j++){
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