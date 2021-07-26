//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
void solve(){
    ll n,x;
    string s;
    cin>>n>>x>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='o'){
            x++;
        }
        if(s[i]=='x' && x!=0){
            x--;
        }
    }
    cout<<x<<endl;

    return;
}
int main(){
    fast;

    solve();

    return 0;
}


