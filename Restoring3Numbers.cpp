#include<iostream>
using namespace std;

int main(){
    int arr[4];
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
    int max=0;
    for(int i=0; i<4; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int arra[3];
    int ctr=0;
    int num=0;
    for(int j=0; j<4; j++){
        if(arr[j]==max){
            continue;
        }
        else{
            num=max-arr[j];
            arra[ctr]=num;
            ctr++;
        }
    }
    cout<<arra[0]<<" "<<arra[1]<<" "<<arra[2];
    return 0;
}