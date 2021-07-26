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

/*--------------------------------------------*/

int dp[4000][4000];
void solve(){
    string s,t;
    cin>>s>>t;
    for(int i=s.size();i>=0;i--){
        for(int j=t.size();j>=0;j--){
            if(s[i]==t[j]){
                dp[i][j]=dp[i+1][j+1]+1;

            }
            else{
                dp[i][j]=max(dp[i+1][j],dp[i][j+1]);
            }
        }
    }
    string ans="";

   // int i=s.size()-1,j=t.size()-1;
    /*for(int i=0;i<s.size();i++){
        for(int j=0;j<t.size();j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }*/
    int i=0,j=0;
    while(i<s.size() && j<t.size()){
        if(s[i]==t[j]){
            ans+=s[i];
            i++;
            j++;
        }
        else if(dp[i+1][j]<dp[i][j+1]){
            j++;
        }
        else{
            i++;
        }
    }
    cout<<ans<<endl;

    return;
}
int main(){
    fast;

    solve();

    return 0;
}


