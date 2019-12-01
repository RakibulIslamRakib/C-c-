#include<bits/stdc++.h>
using namespace std;
#define MAX 100001
int arr[MAX];
struct{
    int sum,prop=0;
    }tree[MAX*3];

void built(int node,int beginn,int endd){
    if(beginn==endd){
        tree[node].sum=arr[endd];
        return;
    }
    int left=node*2;
    int right=node*2+1;
    int mid=(beginn+endd)/2;
    built(left,beginn,mid);
    built(right,mid+1,endd);
    tree[node].sum=tree[left].sum+tree[right].sum;
}

void update(int node,int beginn,int endd,int index1,int index2,int value){
    if(index2<beginn||endd<index1){
        return;
    }
    if(beginn>=index1&&endd<=index2){
        tree[node].prop+=value;
        tree[node].sum+=value*(endd-beginn+1);
                return;
    }
    int left=node*2;
    int right=node*2+1;
    int mid=(beginn+endd)/2;
    update(left,beginn,mid,index1,index2,value);
    update(right,mid+1,endd,index1,index2,value);
    tree[node].sum=tree[right].sum+tree[left].sum;

}


int query(int node,int beginn,int endd,int begrange,int endrange,int carry){

    if(begrange<beginn||endd<endrange||begrange>endd){
        return 0;
    }

    if(beginn<=begrange && endd>=endrange){
        return tree[node].sum+=(endd-beginn+1)*carry;
    }

    int left=node*2;
    int right=node*2+1;
    int mid=(beginn+endd)/2;
    int qleft=query(left,beginn,mid,begrange,endrange,carry+tree[node].prop);
    int qright=query(left,beginn,mid,begrange,endrange,carry+tree[node].prop);
    return qleft+qright;
}


int main(){
    int array_size;
    cin>>array_size;
    for(int i=1;i<=array_size;i++){
        cin>>arr[i];
    }
   built(1,1,array_size);

    int query_number;
    cin>>query_number;
    for (int q=0;q<query_number;q++){
        int query_type;
        cin>>query_type;
        if(query_type==1){
            int index1,index2,value;
            cin>>index1>>index2>>value;
            update(1,1,array_size,index1,index2,value);
        }
        else{
            int begrange,endrange;
            cin>>begrange>>endrange;
            int x=query(1,1,array_size,begrange,endrange,0);
            cout<<x<<endl;
        }
    }

}
