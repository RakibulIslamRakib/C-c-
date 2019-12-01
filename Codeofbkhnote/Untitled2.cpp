#include<bits/stdc++.h>
using namespace std;

int vlu[101];
int indx[101];

int main(){
int n;
cin>>n;
int q;
memset(indx,0,sizeof(indx));
for(int i=0;i<n;i++){
cin>>q;
for(int j=0;j<q;j++){
cin>>vlu[j];
indx[vlu[j]]=j;
}
int tmp;
int p=1,in=0;
int query=q;
while(q>=1){
    if(vlu[in!=p]){
        tmp=vlu[indx[p]];
        vlu[indx[p]]=vlu[indx[p]-1];
        vlu[indx[p]-1]=tmp;
        q--;
    }
    in++;
    p++;
}
for(int j=0;j<query;j++){
        if(j!=0){
    cout<<" "<<vlu[j];
        }
        else{
    cout<<vlu[j];
        }
    }
    cout<<endl;
}
}



