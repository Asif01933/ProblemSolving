//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
void solve(){
    int n,x;
    cin>>n>>x;
    int tot=0;
    int a[n+1];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    //if(a[x]==1){
        //tot++;
    //}
    int left=x,right=x;
    while(n--){
        if(left>0 && right<n+1){
            if(a[left]==1 && a[right]==1){
                tot++;

            }
            left--;
            right++;

        }
        else if(left>0 && right>n){
            if(a[left]==1){
                tot++;
            }
            left--;
        }
        else if(left<1 && right<n){
            if(a[right]==1){
                tot++;
            }
            right++;
        }
    }
    cout<<tot<<endl;


    return;
}
int main(){
    fast;

    solve();

    return 0;
}


