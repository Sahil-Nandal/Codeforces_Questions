#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int p;
    cin>>p;
    int q;
    n--;
    int ctr=1;
    while(n--){
        cin>>q;
        if(p==q){
            continue;
        }
        else{
            ctr++;
        }
        p=q;
    }
    cout<<ctr;
    return 0;
}