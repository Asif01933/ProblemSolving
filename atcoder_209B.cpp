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
    ll n,x,sum=0,ev=0;
    cin>>n>>x;
    ll a[n+1];
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(i%2==0){
            ev++;
        }
        sum+=a[i];

    }
    if(x>=sum-ev){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

    return;
}
int main(){
    fast;

    solve();

    return 0;
}


