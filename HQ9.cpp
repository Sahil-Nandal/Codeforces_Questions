#include<iostream>
#include<string>
using namespace std;

int main(){
    string p;
    cin>>p;
    int ctr=0;
    for(int i=0; i<p.length(); i++){
        if(p[i]=='H' || p[i]=='Q' || p[i]=='9'){
            cout<<"YES";
            ctr=1;
            break;
        }
    }
    if(ctr==1){
        return 0;
    }
    else{
        cout<<"NO";
    }
    return 0;
}