#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int j;
    for(int i=0; i<n; i++){
        cin>>j;
        if(j==1){
            cout<<"HARD";
            return 0;
        }
    }
    cout<<"EASY";
    return 0;
}