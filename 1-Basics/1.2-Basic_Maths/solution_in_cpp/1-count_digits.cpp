#include<bits/stdc++.h>
using namespace std;

int CountDigit(int n){
    int count=0;
    while(n>0){
        count++;
        n = n/10;
    }

    return count;
}

int main(){
    cout<<"Enter Digit N : ";
    int n;
    cin>>n;

    cout<<CountDigit(n);

    return 0;
}