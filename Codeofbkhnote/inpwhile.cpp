#include<bits/stdc++.h>
typedef long long ll;
#define  rep(i,a,b) for(int i=a;i<=b;i++)
#define SQ(a) a*a
using namespace std;
int main(){
vector<int>vfi;
vfi.push_back(5);
vfi.push_back(12);
vfi.push_back(15);
vfi.push_back(SQ(7));

    rep(i,1,vfi.size()-1){
    cout<<vfi[i]<<" ";
    if(i==vfi.size()-1){
        cout<<endl;
    }

}
cout<<SQ(7);
}
