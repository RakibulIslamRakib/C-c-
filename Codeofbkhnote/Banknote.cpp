#include<bits/stdc++.h>
using namespace std;
int main(){
int n;cin>>n;
string s;
for(int i=0;i<n;i++){
    cin>>s;
    string x="";
    int ln=s.size();
        for(int j=0;j<ln;j++){
        if(s[j]==s[j+1]){
            j++;
        }
    else{
        x+=s[j];
    }

    }
        sort(x.begin(),x.end());
        x=set(x.begin(),x.end());
        cout<<x<<endl;
    }

}

