#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
ll tst;
    cin>>tst;
    while(tst--){
    ll x,y;
    cin>>x>>y;
    if(x==2)x=3;
    if(y>x &&(x==1||x==3)){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    }
}
