#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int>v;
    sort(a,a+n);
    for(int i=0;i<n;i++){
        if(a[i]==a[i-1]){
            a[i]+=v;
        }
    }
    cout<<v;
    return 0;
}