#include<bits/stdc++.h>
using namespace std;


bool uniqueOccurance(int arr[], int n) {
    map<int, int> mpp;
    
    for(int i=0; i<n; i++) {
        mpp[arr[i]]++;
    }

    set<int> st;
    for(auto i : mpp) {
        int frq = i.second;
        if(st.find(frq) == st.end()) {
            st.insert(frq);
        } else {
            return false;
        }
    }

    return true;
}

int main() {
    
    int arr[7] = {1,2,2,4,3,3,2};

    if(uniqueOccurance(arr,7)){
        cout<<"yes";
    }
    else cout<<"no";

    return 0;

}