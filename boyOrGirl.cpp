#include<iostream>
#include<string>
#include<set>
using namespace std;

int main(){
    string s;
    cin>>s;
    set<char> ch;
    
    for(int i=0; i<s.length(); i++){
        ch.insert(s[i]);
    }
    int ans=ch.size();
    if(ans%2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
    return 0;
}