#include<bits/stdc++.h>
using namespace std;


int main(){
   
    int n;
    cin>>n;
    vector<int>skill(n);
    for(int i=0;i<n;i++){
       cin>>skill[i];
    }
    sort(skill.begin(),skill.end());
    int prob=0;
    for(int i=0;i<n;i=i+2){
        prob+=skill[i+1]-skill[i];
    }
  
    cout<<prob<<endl;
    return 0;
}