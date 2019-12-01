#include<bits/stdc++.h>
using namespace std;
int main(){
int n,sum=0,a;
cin>>n;
vector<int>v;
for(int i=0;i<n;i++){
        int x;cin>>x;
    v.push_back(x);
}
sort(v.rbegin(),v.rend());
v.erase(v.begin()+2);
for(int i=0;i<v.size();i++){
        cout<<v[i]<<"  ";
}

}



