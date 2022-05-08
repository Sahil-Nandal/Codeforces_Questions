#include<iostream>
using namespace std;
//not done!
int main(){
    int n;
    cin>>n;
    int l=0;
    int non=0;

    while(n>0){
        int digi=n%10;
        if(digi==4 || digi==7){
            l++;
        }
        else{
            non++;
        }
        n=n/10;
    }
    int count=0;
    while(l>0){
        int digit=l%10;
        if(digit!=4 || digit!=7){
            count++;
        }
        l=l/10;
    }
    if(count==0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}