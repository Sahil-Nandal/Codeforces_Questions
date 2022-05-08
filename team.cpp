#include<iostream>
using namespace std;

void ans(int a, int b, int c, int &ctr){
    if(a==0 && b==0 && c==0){
        return; 
    }
    else if(a==1 && b==1 && c==1){
        ctr++;
        return;
    }
    else if((a==1 && b==1 && c==0) || (a==1 && b==0 && c==1) || (a==0 && b==1 && c==1)){
        ctr++;
        return;
    }
    else{
        return;
    }
}

int main(){
    int t;
    cin>>t;
    int ctr=0;
    int a,b,c;
    for (int i=0; i<t; i++){
        cin>>a>>b>>c;
        ans(a,b,c, ctr);
    }

    cout<<ctr;
    return 0;
}