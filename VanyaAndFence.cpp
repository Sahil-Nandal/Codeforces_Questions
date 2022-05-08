#include<iostream>
using namespace std;

int main(){
    int n,h;
    cin>>n>>h;
    int ctr=0;
    int a;
    for(int i=0; i<n; i++){
        cin>>a;
        if(a<=h){
            ctr++;
        }
        else{
            ctr=ctr+2;
        }
    }
    cout<<ctr;
    return 0;
}