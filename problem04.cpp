#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i =0;i<t;i++){
        int n,u,l,r,val,q,query;
        cin>>n>>u;
        int arr[n]={0};
        int dif[n+1]={0};
        
        for(int j=0;j<u;j++){
            cin>>l>>r>>val;
            dif[l]+=val;
            dif[r]-=val;
            // while(l<=r){
            //     arr[l]+=val;
            //     l++;
            // }
        }
        for(int j=0;j<n+1;j++){
            cout<<dif[j]<<" ";
        }
        cout<<endl;
        for(int j=1;j<n+1;j++){
            dif[j]+=dif[j-1];
        }
        
        cin>>q;
        for(int j=0;j<q;j++){
            cin>>query;
            cout<<arr[query]<<endl;
        }
    }

    return 0;
}