#include<bits/stdc++.h>
using namespace std;

int evenlyDivides(int n){
    int count = 0;
    int rem = n;
    while(rem!=0){
        int temp = rem%10;
        rem = rem/10;
        if(temp>0 && n%temp==0) count++;
    }
    
    return count;
}

int main(){
    cout<<"Enter Digit N : ";
    int n;
    cin>>n;

    cout<<evenlyDivides(n);

    return 0;
}