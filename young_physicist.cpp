#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int x,y,z;
    int xi=0,yi=0,zi=0;
    while (t--)
    {
        cin>>x>>y>>z;
        xi=xi+x;
        yi+=y;
        zi+=z;
    }
    if(xi==0 && yi==0 &&zi==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}