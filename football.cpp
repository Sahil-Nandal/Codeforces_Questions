#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin>>s;
    int l=s.length();
    int ctr=1;
    char c=s[0];
    int e=1;
    for(int i=1; i<l; i++){
        if(s[i]==c){
            ctr++;
            if(ctr>6){
                cout<<"YES";
                break;
            }
            e++;
        }
        else{
            ctr=1;
            c=s[i];
            e++;
        }
    }
    if(e==l){
        cout<<"NO";
    }
    return 0;
}