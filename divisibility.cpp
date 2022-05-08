#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int a, b, ctr=0;
    while(t--){
        cin>>a>>b;
        int re=a%b;
        if(a<b){
            cout<<b-a<<endl;
        }
        else if(a%b==0){
            cout<<0<<endl;
        }
        else{
            cout<<b-re<<endl;
        }
    }
    return 0;
}