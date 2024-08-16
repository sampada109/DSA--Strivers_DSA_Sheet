#include<bits/stdc++.h>
using namespace std;

int find_gcd(int n1, int n2){
    while(n1>0 && n2>0){
        if(n1>n2){
            n1 = n1-n2;
        }
        else n2 = n2-n1;
    }

    return max(n1,n2);
}

int main(){
    cout<<"Enter n1 : ";
    int n1;
    cin>>n1;
    cout<<"Enter n2 : ";
    int n2;
    cin>>n2;

    cout<<find_gcd(n1,n2);

    return 0;
}