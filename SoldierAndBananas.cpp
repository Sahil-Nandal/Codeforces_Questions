#include<iostream>
using namespace std;

int main(){
    int k,n,w;
    cin>>k>>n>>w;
    int total=0;
    for(int i=1; i<=w; i++){
        total=total+(i*k);
    }
    int ans=total-n;
    if(total<=n){
        cout<<0;
    }
    else{cout<<ans;}
    return 0;
}