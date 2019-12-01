#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,p=0;
    long long int a,b;
    long long int c;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a>>b;
        c=(a*a)-(b*b);
        for(int j=2;j<=c/2;j++){
        if(c%j==0){
           p=1;
           break;
        }
        }
        if(p==1)cout<<"No"<<endl;
        else
            cout<<"YES"<<endl;
    }
return 0;
}
