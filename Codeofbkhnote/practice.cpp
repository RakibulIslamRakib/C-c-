#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int vlu[102];
int indx[102];

int main(){
int n;
cin>>n;
int q;
memset(indx,0,sizeof(indx));
for(int i=1;i<=n;i++){
cin>>q;
for(int j=1;j<=q;j++){
cin>>vlu[j];
indx[vlu[j]]=j;
}
for(int j=1;j<=q;j++){
    cout<<" "<<vlu[j]<<"  .."<<indx[vlu[j]]<<" ";
}
cout<<endl;
int p=1;
for(int j=1;j<q;j++){
    cout<<" "<<vlu[indx[p]]<<"  .."<<vlu[indx[p]-1]<<" ";
    p++;
}
cout<<endl;
}
}
