#include<bits/stdc++.h>
using namespace std;

void pattern(int n){
    int start = 1;

    //SOLUTION 1
    // for(int i=1; i<=n; i++){
    //     for(int j=start; j<start+i; j++){
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    //     start = start + i;
    // }

    // OR SOLUTION 2
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<start<<" ";
            start = start + 1;
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