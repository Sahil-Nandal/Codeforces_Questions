#include<iostream>
using namespace std;

int main(){
    int n,q;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cin>>q;
    int m,ctr=0,arr1[q];
    for(int j=0; j<q; j++){
        cin>>m;
        for(int k=0; k<n; k++){
            if(m>=arr[k]){
                ctr++;
            }
        }
        arr1[j]=ctr;
        ctr=0;
    }
    for(int j=0; j<q; j++){
        cout<<arr1[j]<<endl;
    }
    return 0;
}