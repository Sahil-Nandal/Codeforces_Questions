#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin>>s;
    int ctr=0;
    int main=0;
    for(int i=0; i<s.length(); i++){
        if(s[i]!='h'){
            ctr++;
        }
        else{
            ctr++;
            main++;
            break;
        }
    }
    for(int i=ctr; i<s.length(); i++){
        if(s[i]!='e'){
            ctr++;
        }
        else{
            ctr++;
            main++;
            break;
        }
    }
    for(int i=ctr; i<s.length(); i++){
        if(s[i]!='l'){
            ctr++;
        }
        else{
            ctr++;
            main++;
            break;
        }
    }
    for(int i=ctr; i<s.length(); i++){
        if(s[i]!='l'){
            ctr++;
        }
        else{
            ctr++;
            main++;
            break;
        }
    }
    for(int i=ctr; i<s.length(); i++){
        if(s[i]!='o'){
            ctr++;
        }
        else{
            ctr++;
            main++;
            break;
        }
    }

    if(ctr<s.length() || (ctr==s.length() && s[ctr-1]=='o' && main==5)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    return 0;
}