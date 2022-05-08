#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    cin>>n;
    string h="I hate ";
    string l="I love ";
    string t="that ";
    string i="it";
    for(int i=1; i<=n; i++){
        if(i%2==1){
            cout<<h;
            if(i!=n){
                cout<<t; 
            }
        }
        else if(i%2==0){
            cout<<l;
            if(i!=n){
                cout<<t; 
            }
        }
    }
    cout<<i;
    return 0;
}