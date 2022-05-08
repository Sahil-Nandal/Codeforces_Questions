#include<iostream>
#include<string>
#include<vector>
using namespace std;


int main(){
    int n;
    cin>>n;
    string a;
    int l,o,t;
    
    for (int i=0; i<n; i++){
        cin>>a;
        l=a.length();
        o=l%10;
        t=l/10;
        vector<char> ans;
        ans.push_back(a[0]);  
        ans.push_back(a[l-1]);
      
        if (l<=10){
        cout<<a<<endl;
        }
        else {
            cout<<ans[0]<<t<<o<<ans[1]<<endl;
    }
    }


    return 0;
}