#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll ar[100000];
int main(){
    ll n;
    cin>>n;
    memset(ar,0,sizeof(ar));
    for(ll i=0;i<n;i++){
        ll x;cin>>x;
        ar[x]++;
    }
    ll val=0,ans=0;
    for(ll i=1;val!=n;i++){

        if(ar[i]!=0){
            val++;
        }
        if(ar[i]>1){
            ans+=ar[i]-1;
            ar[i+1]+=ar[i]-1;
        }
    }
    cout<<ans<<endl;
}

