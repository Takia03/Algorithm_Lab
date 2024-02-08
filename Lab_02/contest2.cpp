#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,x;
    cin>>n>>k;
    vector<int>arr;
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    sort(arr.begin(),arr.end());
    
    if (k==0){
        cout<<arr[0]<<endl;
    }

    else if(k==n){
        cout<<arr[n-1]<<endl;
    }
    else{
        cout<<arr[k-1]<<endl;
    }
    return -1;
}