#include<iostream>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int scr=arr[k-1];
    int ctr=0;
    if (scr>0){
        for(int j=0; j<n; j++){
            if(arr[j]>=scr){
                ctr++;
            }
        }
        cout<<ctr;
    }
    else{
        cout<<0;
    }
    return 0;
}