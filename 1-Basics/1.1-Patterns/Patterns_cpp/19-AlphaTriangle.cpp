#include<bits/stdc++.h>
using namespace std;


void pattern(int n){
    char c = 'A'+n-1;
    
    for(int i=0; i<n; i++){
        for(char j=c-i; j<=c; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

int main(){
    cout<<"Enter Starting Point N : ";
    int n;
    cin>>n;

    pattern(n);

    return 0;
}