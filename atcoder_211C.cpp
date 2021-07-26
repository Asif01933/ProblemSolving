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

ll dp[maxn];
void solve(){
    string s;
    cin>>s;
    ll mod=1e9+7;
    for(int i=s.size();i>=0;i--){
        if(s[i]=='i'){
            dp[7]++;
            dp[7]%=mod;
        }
        if(s[i]=='a'){
            dp[6]=(dp[6]+dp[7])%mod;
        }
        if(s[i]=='d'){
            dp[5]=(dp[5]+dp[6])%mod;
        }
        if(s[i]=='u'){
            dp[4]=(dp[4]+dp[5])%mod;
        }
        if(s[i]=='k'){
            dp[3]=(dp[3]+dp[4])%mod;
        }
        if(s[i]=='o'){
            dp[2]=(dp[2]+dp[3])%mod;
        }
        if(s[i]=='h'){
            dp[1]=(dp[1]+dp[2])%mod;
        }
        if(s[i]=='c'){
            dp[0]=(dp[0]+dp[1])%mod;;
        }
    }
    dp[0]%=mod;
    cout<<dp[0]<<endl;

    return;
}
int main(){
    fast;

    solve();

    return 0;
}


