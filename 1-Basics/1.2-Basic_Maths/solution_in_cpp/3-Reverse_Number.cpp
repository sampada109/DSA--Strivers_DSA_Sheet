#include<bits/stdc++.h>
using namespace std;


int Reverse_number(int n){
    int num = 0;
    int rem = n;
    while(rem != 0){
        int last = rem % 10;
        num = (num*10) + last;
        rem = rem/10;
    }

    return num;
}

int main(){
    cout<<"Enter Number N : ";
    int n;
    cin>>n;

    cout<<Reverse_number(n);

    return 0;
}