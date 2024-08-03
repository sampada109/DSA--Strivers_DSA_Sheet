#include<bits/stdc++.h>
using namespace std ;

// ---A
// --ABA
// -ABCBA
// ABCDCBA

void pattern(int n){
    for(int i=1; i<=n; i++){
        char c = 'A';
        
        // space
        for(int j=n-i; j>0; j--){
            cout<<" ";
        }

        // left
        for(int k=1; k<=i; k++){
            cout<<c;
            c++;
        }

        // right
        for(char l='A'+i-2; l>='A'; l--){
            cout<<l;
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