#include<bits/stdc++.h>
using namespace std;


bool check_armstrong(int n){
    // cal no of digits
    int d = to_string(n).length();

    // sum
    int sum = 0;

    int temp = n;

    // iterate over number
    while(temp>0){
        int last = temp % 10;

        sum = sum + pow(last, d);
        cout<<"pow:"<<pow(last,d)<<endl;
        cout<<"sum:"<<sum<<endl;

        temp = temp / 10;
    }

    return(sum==n);
}


int main(){
    cout<<"Enter Number N : ";
    int n;
    cin>>n;

    cout<<check_armstrong(n);
    cout<<27+125;

    return 0;
}