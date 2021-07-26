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
string s;
bool check()
{
    for(int i=2;i<s.length();i++) if(s[i]=='C') return true;
    return false;
}
void solve(){

    cin>>s;
    string k="0ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    if(s[0]=='R' && s[1]<='9' && check()){
        ll i=1;
        string row="",col="";
        while(isdigit(s[i])){
            row+=s[i];
            i++;
            //cout<<row<<endl;
        }
        i+=1;
        while(i<=s.size()-1){
            col+=s[i];
            i++;
        }
        ll val=stoi(col);
        //cout<<val<<endl;
        string ans="";
        while(val){
            //cout<<val%26<<endl;
            //cout<<(val%26)-'0'<<endl;
            if(val%26==0){
                val--;
                ans+='Z';
            }
            else{

               ans+=k[val%26];
            }

            val/=26;
        }
        reverse(ans.begin(),ans.end());

        cout<<ans<<row<<endl;;
    }
    else{
        ll i=0;
        string irri="",left="";
        while(i<s.size()){
            if(!isalpha(s[i])){
                irri+=s[i];
            }
            else{
                left+=s[i];
            }
            i++;
        }
        ll sz=left.size()-1;
        ll pr=left.size()-1;
        ll val=0;
        i=0;
        while(i<=sz){
            ll res=1;
            for(int m=1;m<=pr;m++){
                res*=26;
            }
            int idx=left[i]-'A';
            //cout<<res<<endl;
            val+=(res*(idx+1));
           //cout<<val<<endl;
            i++;
            pr--;
        }


        cout<<"R"<<irri<<"C"<<val<<endl;
    }

    return;
}
int main(){
    fast;
    int t;
    cin>>t;
    while(t--){
       solve();
    }


    return 0;
}


