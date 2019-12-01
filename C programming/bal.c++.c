#include<bits/stdc++.h>
using namespace std;
vector<int>v[100];
vector<int>visited(100,0);

void bfs(int n){
queue<int>q;
q.push(n);
visited[n]=1;
while(!q.empty()){
    int a=q.front();
    cout<<a<<endl;
    q.pop();
    for(int i=0;i<v[a].size();i++){
        if(visited[v[a][i]]==0){
            q.push(v[a][i]);
             visited[v[a][i]]=1;
        }
    }
}
}



void dfs(int n){
stack<int>s;
s.push(n);
visited[n]=2;
while(!s.empty()){
    int a=s.top();
    cout<<a<<endl;
    s.pop();
    for(int i=0;i<v[a].size();i++){
        if(visited[v[a][i]]!=2){
            s.push(v[a][i]);
             visited[v[a][i]]=2;
        }
    }
}
}


int main(){
    int x,y,root,n;
cin>>n;
for(int i=0;i<n;i++){
    cin>>x>>y;
    v[x].push_back(y);
    v[y].push_back(x);
}
cin>>root;
bfs(root);
cout<<endl;
dfs(root);
}




