#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        v.push_back(num);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        if(v[i]%2==0){
            cout<<v[i]<<" ";
        }
    }
    reverse(v.begin(),v.end());
    for(int i=0;i<n;i++){
        if(v[i]%2==1){
            cout<<v[i]<<" ";
        }
    }
    return 0;
}