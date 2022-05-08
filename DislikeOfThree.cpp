#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int n;
    while(t--){
        cin>>n;
        int ctr=2;
        for(int i=3; i<1667; i++){
            int j=i%3;
            if(n==1){
                cout<<1<<endl;
                break;
            }
            else if(n==2){
                cout<<2<<endl;
                break;
            }
            else if(i%10!=3 && j!=0){
                ctr++;
            }
            if(ctr==n){
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}