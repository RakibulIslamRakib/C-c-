using namespace std;
#include <bits/stdc++.h>
int main()
{
      int w,h,u1,h1,u2,h2;
      cin>>w;
      cin>>h;
      cin>>u1;
       cin>>h1;
      cin>>u2;
      cin>>h2;
       while(h>=0){
        if(w<0){
            w=0;
        }
        w=w+h;
       if(h==h1){
         w=w-u1;
       }

     else if(h==h2){
         w=w-u2;
       }
     h--;
}
   if(w<0){
         w=0;
     }
cout<<w;
}
