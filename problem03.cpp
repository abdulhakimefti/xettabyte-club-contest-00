#include<bits/stdc++.h>
using namespace std;


int main(){
    int st,amp,fq;
    cin>>st;
    cin>>amp;
    cin>>fq;
   
    for(int i=1;i<=fq;i++){
        int start = st;
        bool is_ok = true;
        for(int j=st,m=1;;){
            if(j<=amp&&is_ok==true){
              
                for(int k=0;k<m;k++){
                    cout<<start;
                }
                cout<<endl;
                j++;
                m++;
                start++;
            }
            else if((j>amp||j<=amp)&&j>=st){
                is_ok=false;
                start--;
                j--;
                m--;
                for(int k=0;k<m-1;k++){
                    cout<<start-1;
                }
                if(j-1>=st){
                    cout<<endl;
                }
            }
            if(j==st){
               if(i<fq)cout<<endl;
                break;
            }
        }
    }
    return 0;
}