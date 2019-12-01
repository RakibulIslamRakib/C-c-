#include <bits/stdc++.h>
using namespace std;
int main(){
int a,b,mi=0;
cin>>a;
cin>>b;
if(a==1&&b==1){

}
else{
while(a>0&&b>0){
    if(a<b){
        a+=1;
        b-=2;
    }
    else{
        b+=1;
        a-=2;
    }
    mi++;
}
}
    cout<<mi<<endl;

}
