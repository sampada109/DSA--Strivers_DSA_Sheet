#include<bits/stdc++.h>
using namespace std;

bool Palindrome(int n){
    if(n<0) return false;

    int num = 0;
    int rem = n;
    while(rem != 0){
        int last = rem %10;
        num = (num*10) + last;
        rem = rem /10;
    }

    return (num==n);
}

int main(){
    cout<<"Enter Number N : ";
    int n;
    cin>>n;

    cout<<(Palindrome(n) ? "true" : "false");

    return 0;
}