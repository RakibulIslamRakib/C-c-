using namespace std;
#include <bits/stdc++.h>
int main()
{
    int a,b,c,e;
    cin>>a;
    cin>>b;
    cin>>c;
    if(a>b&&a>c){
            if(b>c){
        e=a*(b+c);
            }
    }
    else if(a<b&&b>c){
        e=b*(a+c);
    }
    else{
       e=c*(a+b);
    }
    cout<<e;
}
