#include<iostream>
#include<algorithm>
using namespace std;
//not accepted!!
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    int size=sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+size);
    int ctr=0,sum1=0,sum2=0;
    for(int j=n-1; j>=0; j--){
        sum1+=arr[j];
        ctr++;
        for(int k=j-1; k>=0; k--){
            sum2+=arr[k];
        }
        if(sum1>sum2){
            cout<<ctr<<"\n";
            break;
        }
        else{
            sum2=0;
        }
    }
    return 0;
}