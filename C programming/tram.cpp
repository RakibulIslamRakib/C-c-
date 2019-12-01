#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,b,sum=0,capacity=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a>>b;
        sum=sum-a+b;
        if(capacity<sum)capacity=sum;
    }
    cout<<capacity<<endl;
}
