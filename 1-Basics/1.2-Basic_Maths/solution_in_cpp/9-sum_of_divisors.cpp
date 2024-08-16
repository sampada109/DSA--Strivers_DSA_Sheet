#include<bits/stdc++.h>
using namespace std;

int sum_divisor(int n){
    int sum = 0;
    for(int i=1; i<=n; i++){
        cout<<"f-"<<i<<"->";
        for(int j=1; j<=sqrt(i); j++){
            if(i%j==0){
                sum += j;
                cout<<j<<"-> sum-"<<sum<<endl;
            }
        }
        cout<<"before"<<sum;
        sum +=i;
    }

    return sum;
}


int main(){
    cout<<"Enter value of N : ";
    int n;
    cin>>n;

    cout<<sum_divisor(n);

    return 0;
}