#include<bits/stdc++.h>
using namespace std;
int main(){
int n,a,cnt=0;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i=0;i<n;i++){

    if(arr[i]%2==0){
        cout<<arr[i]/2<<endl;
    }
    else{
        if(arr[i]<0){
             if(cnt%2==0){cout<<(arr[i]/2)<<endl;
             }
             else{   cout<<(arr[i]/2)-1<<endl;}
             cnt++;
                }
         else{
            if(cnt%2==0){cout<<(arr[i]/2)+1<<endl;
             }
            else{   cout<<(arr[i]/2)<<endl;}
            cnt++;
         }

    }


    }
}
