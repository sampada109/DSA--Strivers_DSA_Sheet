#include<bits/stdc++.h>
using namespace std;

// 1----1
// 12--21
// 123321

void pattern(int n){
    for(int i=1; i<=n; i++){
        // left number
        for(int j=1; j<=i; j++){
            cout<<j;
        }
        // space
        for(int k=1; k<=((n*2)-(i*2)); k++){
            cout<<" ";
        }
        // right
        for(int l=i; l>0; l--){
            cout<<l;
        }
        cout<<endl;
    }


}

int main(){
    cout<<"Enter Max Number N : ";
    int n;
    cin>>n;

    pattern(n);

    return 0;
}