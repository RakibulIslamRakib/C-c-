#include<bits/stdc++.h>
#define Rep(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
int n,ar[100];
vector<int>v;
void Rangen(int n){
Rep(i,1,n){
ar[i]=rand();
v.push_back(ar[i]);
}
}
void Shownum(int n){
Rep(i,0,v.size()-1){
cout<<v[i]<<" ";
if(i==v.size()-1){
    puts("");
}
}
}
int main(){

cin>>n;
Rangen(n);
Shownum(n);
sort(v.begin(),v.end());
Shownum(n);
}
