#include<bits/stdc++.h>
using namespace std;


vector<int> interSection(vector<int> arr1, vector<int> arr2){
    
    int n = arr1.size();
    int m = arr2.size();

    vector<int> ans;

    int i = 0, j = 0;

    while( i < n && j < m ){
        if(arr1[i] < arr2[j]){
            i++;
        }
        else if(arr1[i] == arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else{
            j++;
        }
    }

    return ans;
}

int main() {

    vector<int> arr1 = {1,2,2,2,3,4};
    vector<int> arr2 = {2,2,3,3};

    vector<int> ans = interSection(arr1, arr2);

    for(int i : ans){
        cout<<i<<" ";
    }

    return 0;
}