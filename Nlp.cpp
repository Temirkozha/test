#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    vector<int>w;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int k,a;
    cin>>k>>a;
    for(int i=0;i<n+1;i++){
        if(i<k){
            w.push_back(v[i]);
        }
        else if(i==k){
            w.push_back(a);
        }
        else{
            w.push_back(v[i-1]);
        }
    }
    for(int i=0;i<w.size();i++){
        cout<< w[i]<<" ";
    }
    return 0;
}