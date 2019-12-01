#include <bits/stdc++.h>

using namespace std;
vector<int>v;
int main()
{
   int abc,ab,ac,bc,a,b,c;
  for(int i=0;i<4;i++){
    cin>>v[i];
  }
  sort(v.begin(), v.end());
   for(int i=0;i<4;i++){
    cout<<v[i]<<" ";
  }
}
