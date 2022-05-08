#include<iostream>
using namespace std;

int main(){
    int d, sumtime;
    cin>>d>>sumtime;
    int arr[d][2];
    for (int i=0; i<d; i++){
        cin>>arr[i][0]>>arr[i][1];
    }
    int sum=0;
    for (int j=0; j<d; j++){
        sum=sum+arr[j][1];
    }

    if(sum<sumtime){
        cout<<"NO";
    }
    else{
        cout<<"YES"<<endl;
    }

    

    return 0;
}