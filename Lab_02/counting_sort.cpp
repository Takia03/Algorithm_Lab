#include<bits/stdc++.h>
using namespace std;

int find_max(int arr[],int n){
    int max= arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];

        }
    }
    return max;
}

void counting_sort(int arr[],int n){
    int output[n+1];
    int max=find_max(arr,n);
    int count[max+1];

    for(int i=0;i<=max;i++){
        count[i]=0;
    }

    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }

    for(int i=1;i<=max;i++){
        count[i]+=count[i-1];
    }

    for(int i=n-1;i>=0;i--){
        output[count[arr[i]]-1]=arr[i];
        count[arr[i]]--;
    }

    for(int i=0;i<n;i++){
        arr[i]=output[i];
    }

}

int main(){
    ifstream in("../input.txt");
    cin.rdbuf(in.rdbuf());

    ofstream out("../output.txt");
    cout.rdbuf(out.rdbuf());

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    counting_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
