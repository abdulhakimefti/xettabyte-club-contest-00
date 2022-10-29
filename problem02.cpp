#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin>>N;
    int arrNum[N];
    for(int i =0;i<N;i++){
        cin>>arrNum[i];
    }
    int Q;
    cin>>Q;
    for(int k=0;k<Q;k++){
        int i,j;
        cin>>i>>j;
        int sum =0;
        for(int l=i;l<=j;l++){
            sum+=arrNum[l];
        }
        cout<<sum<<endl;
    }
    return 0;
}