#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ctr=0;
    char temp=s[0];
    for(int i=1; i<n; i++){
        if(s[i]==temp){
            ctr++;
        }
        else{
            temp=s[i];
        }
    }
    cout<<ctr;
    return 0;
}