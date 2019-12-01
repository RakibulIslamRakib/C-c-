#include <bits/stdc++.h>
using namespace std;
int main(){
string s;
int b;
cin>>s;
for(int i=0;i<s.length();i++){
        b=s[i]-48;
    if(b>=5&&(i!=0||(i==0&&s[i]!='9'))){
      b=9-b;
      s[i]=b+48;
    }
}
cout<<s<<endl;
}
