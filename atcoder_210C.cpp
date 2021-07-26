//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pi 3.14159265
#define pii pair<ll,ll>
#define MOD          1000000007
const int maxn= 1e6;
const int inf=1e9;
/*-------------------------------------------------------*/
/*----------------------Graph Moves----------------*/
//int di[4]={0,-1,0,1},dj[4]={-1,0,1,0};
//const ll dy[]={+0,+0,+1,-1};
//const ll dx[]={+0,+0,+1,-1,-1,+1,-1,+1};   // Kings Move
//const ll dy[]={-1,+1,+0,+0,+1,+1,-1,-1};  // Kings Move
//const ll dx[]={-2, -2, -1, -1,  1,  1,  2,  2};  // Knights Move
//const ll dy[]={-1,  1, -2,  2, -2,  2, -1,  1}; // Knights Move

/*-------------------------------------------------*/
/*-------------- Sieve(Prime)------------*/
/*
bool prime[maxn];
void pr(){
    memset(prime,1,sizeof(prime));
    for(int i=2;i<maxn;i++){
        if(prime[i]==0){
                continue;
        }
        for(int j=i+i;j<maxn;j+=i){
                prime[j]=0;
            }
    }
}
*/
/*--------------------------------------------*/


void solve(){
    ll n,k;
    cin>>n>>k;
    ll mx=0;
    ll a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    unordered_set<ll>s;
    map<ll,ll>mp;
    ll cnt=0;
    for(int i=0;i<k;i++){
        //s.insert(a[i]);
        if(mp[a[i]]==0){
            cnt++;
        }
        mp[a[i]]++;
    }
    mx=cnt;
    //cout<<mx<<endl;
    for(int i=k;i<n;i++){
        //s.erase(s.begin());
        //s.insert(a[i]);
        if(mp[a[i-k]]==1){
            cnt--;
            //mp[a[i-1]]--;
        }
        mp[a[i-k]]--;
        if(mp[a[i]]==0){
            cnt++;
        }
        mp[a[i]]++;
        //ll val=s.size();
        mx=max(mx,cnt);
    }
    cout<<mx<<endl;


    return;
}
int main(){
    fast;

    solve();

    return 0;
}


