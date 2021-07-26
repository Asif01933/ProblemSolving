//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll N,M,K,ans=0;
    cin >> N >> M >> K;
    vector<ll> A(N+1,0),B(M+1,0);

    for(ll i=1;i<=N;i++){
		cin>>A[i];
		A[i]+=A[i-1];
		cout<<"A: "<<A[i]<<endl;
	}

	for(ll i=1;i<=M;i++){
		cin>>B[i];
		B[i]+=B[i-1];
		cout<<"B: "<<B[i]<<endl;
	}

    for(ll i=0,j=M;i<=N;i++){
        cout<<"a: "<<A[i]<<" b: "<<B[j]<<endl;
        if(A[i]>K){
             break;
        }
        while(K<A[i]+B[j] && j>=0){
            j--;
        }
        cout<<"i: "<<i<<" j: "<<j<<endl;
        ans = max(ans,i+j);
        cout<<"ans: "<<ans<<endl;
    }

    cout << ans << endl;

    return 0;
}
