#include<iostream>
using namespace std;

main(){
    int n;
    cin>>n;
    int count=0;
    int ans;
    while(1){
        n++;
        if(count==1){
            cout<<ans;
            return 0;
        }
        else{
            ans=n;
            int arr[4];
            int ctr=0;
            while(n>0){
                int digi=n%10;
                arr[ctr]=digi;int 
                ctr++;
                n=n/10;
            }
            if((arr[0]!=arr[1]) && (arr[0]!=arr[2]) && (arr[0]!=arr[3]) && (arr[1]!=arr[2]) && (arr[1]!=arr[3]) && (arr[2]!=arr[3])){
                count=1;
            }
            n=ans;


        }
    }
    return 0;
}
