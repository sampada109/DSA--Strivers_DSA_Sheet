#include<bits/stdc++.h>
using namespace std;

void pattern(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main(){
    cout<<"Enter Size N : ";
    int n;
    cin>>n;
    
    pattern(n);

    return 0;
}