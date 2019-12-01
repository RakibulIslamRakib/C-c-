#include<bits/stdc++.h>
using namespace std;
vector<int>dis(100,-1);
vector<pair<int,int> >v[100];

void bfs(int n){
queue<int>q;
q.push(n);
dis[n]=0;
while(!q.empty()){
    int a=q.front();
    q.pop();
    for(int i=0;i<v[a].size();i++){
        if(dis[v[a][i].first]==-1||dis[v[a][i].first]>dis[a]+v[a][i].second){
            q.push(v[a][i].first);
            dis[v[a][i].first]=dis[a]+v[a][i].second;
        }
    }
}
}





int main(){
    int x,y,root,n,value,des;
cin>>n;
for(int i=0;i<n;i++){
    cin>>x>>y>>value;
    v[x].push_back(make_pair(y,value));
    v[y].push_back(make_pair(x,value));
}
cin>>root>>des;
bfs(root);
cout<<dis[des]<<endl;
}





