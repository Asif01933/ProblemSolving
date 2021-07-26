//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int tot=0;
    tot=accumulate(a,a+n,tot);
    double vote=ceil(tot/(4.0*m));

    int ans=0;
    sort(a,a+n);
    for(int i=0;i<n;i++){
        if(a[i]>=vote){
            ans++;
        }
    }
    if(ans>=m){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

    return 0;
}
