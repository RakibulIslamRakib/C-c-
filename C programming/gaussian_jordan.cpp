#include <bits/stdc++.h>
#define pb(a)           push_back(a)
#define ll              long long int
#define scd(a)          scanf("%d",&a)
#define mp(a,b)         make_pair(a,b)
#define scl(w)          scanf("%I64d",&w)
#define scdd(a,b)       scanf("%d %d",&a,&b)
#define srt(a)          sort(a.begin(),a.end())
#define rsrt(a)         sort(a.rbegin(),a.rend())
#define scll(a,b)       scanf("%I64d %I64d",&a,&b)
#define input(v,n)      for (ll i=0;i<n;i++){ll a;cin >> a;v.push_back(a);}
#define input2(v1,v2,n) for (ll i=0;i<n;i++){ll a,b;cin >> a>>b;v1.push_back(a);v2.pb(b);}
#define rep(a,n)        for(ll i=a;i<n;i++)
#define vll             vector<ll>

using namespace std;

int main()
{
    int n,res=0,i,j,t;
    double tt;
    cin>>n;
    double arr[n][n+1];
    for(i=0;i<n;i++)
    {
        for(j=0;j<=n;j++)
        {
            cin>>arr[i][j];
        }
    }

    for(i=0;i<n;i++)
    {
        t=1;
        int t3,t4;
        int t2=__gcd(arr[i][j-1],arr[i][j]);
        for(j=1;j<=n;j++)
        {
            t=max(t,t2);
        }
        for(j=0;j<=n;j++)
        {
            arr[i][j]/=t;
        }

    }

    for(i=0;i<n;i++)
    {
        t=i;
        for(j=i+1;j<n;j++)
        {
            if(fabs(arr[j][i])>fabs(arr[t][i]))t=j;
            //cout<<arr[j][i]<<" ";
        }
        //cout<<endl;

        if(t!=i)
        {
            for(j=i;j<=n;j++)
            {
                swap(arr[i][j],arr[t][j]);
            }
        }
        for(j=0;j<n;j++)
        {
            if(j!=i)
            {

                tt=arr[j][i]/arr[i][i];
                //cout<<tt<<endl;
                for(int k=i;k<=n;k++)
                {
                    //cout<<arr[j][k]<<" ";
                    arr[j][k]-=arr[i][k]*tt;
                }
                //cout<<endl;
            }
        }
        for(int p=0;p<n;p++)
        {
            for(int q=0;q<n;q++)
            {
                cout<<arr[p][q]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    //cout<<"t "<<t<<endl;
    if(t!=n)
    {

    }
    //cout<<endl;
    //cout<<endl;
    double ttt=99999999;
    for(i=0;i<n;i++)
    {
        tt=arr[i][i];
        if(fabs(tt)<ttt)
        ttt=fabs(tt);
        for(j=0;j<=n;j++)
        {
            //cout<<tt<<endl;
            arr[i][j]=arr[i][j]/tt;
            //cout<<arr[i][j]<<"n"<<tt<<" ";
        }
        //if(i==0)cout<<"value of "<<(i+1)<<"st variable is: "<<arr[i][n]<<endl;
        //else if(i==1)cout<<"value of "<<(i+1)<<"nd variable is: "<<arr[i][n]<<endl;
        //else if(i==2)cout<<"value of "<<(i+1)<<"rd variable is: "<<arr[i][n]<<endl;
       // else cout<<"value of "<<(i+1)<<"th variable is: "<<arr[i][n]<<endl;
        //cout<<endl;
    }

    cout<<"Solution:"<<endl;
    if(ttt==0)cout<<"Values Cant be calculated."<<endl;
    else
    for(i=0;i<n;i++)
    {
        tt=arr[i][i];
        for(j=0;j<=n;j++)
        {
            //cout<<tt<<endl;
            arr[i][j]=arr[i][j]/tt;
            if(arr[i][j]<.0000000001&&arr[i][j]>-0.00000001)arr[i][j]=0;
            cout<<arr[i][j]<<" ";
            //cout<<arr[i][j]<<"n"<<tt<<" ";
        }
        cout<<endl;
        //cout<<endl;
    }
}
