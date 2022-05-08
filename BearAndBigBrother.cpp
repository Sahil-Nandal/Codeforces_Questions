#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int ctr=0;
    while(a<=b){
        a=a*3;
        b=b*2;
        ctr++;
    }
    cout<<ctr;
    return 0;
}