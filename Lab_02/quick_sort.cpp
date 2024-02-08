#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int start, int end){
    int pivot = arr[end];
    int i = start-1;
    for(int j=start; j<end; j++){
        if(arr[j] < pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[end]);
    return i+1;
}

void quicksort(int arr[], int start, int end){
    if(start < end){
        int pi = partition(arr, start, end);
        quicksort(arr, start, pi-1);
        quicksort(arr, pi+1, end);
    }
}

int main() {
    ifstream in("../input.txt");
    cin.rdbuf(in.rdbuf());

    ofstream out("../output.txt");
    cout.rdbuf(out.rdbuf());

    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    quicksort(arr, 0, n-1);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}