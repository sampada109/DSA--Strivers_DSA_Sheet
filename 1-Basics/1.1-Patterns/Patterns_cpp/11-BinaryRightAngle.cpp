#include<bits/stdc++.h>
using namespace std;

void pattern(int n){
    // starting digit according to row
    for(int i=0; i<n; i++){
        int start = 0;
        if(i%2 == 0) start = 1;

        for(int j=0; j<=i; j++){
            cout<<start<<" ";
            start = 1 - start;   //alternate digits inside each row
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