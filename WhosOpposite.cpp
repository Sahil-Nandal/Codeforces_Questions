#include<iostream>
using namespace std;
//not solved!!!
int main(){
    int t;
    cin>>t;
    int a,b,c;
    while(t--){
        cin>>a>>b>>c;
        int A=a,B=b,C=c;
        int min,max,MIN,MAX;
        if(a==b+1 || b==a+1){
            cout<<-1<<endl;
            continue;
        }
        
        else if(a>b){
            min=b;
            max=a;
            MIN=min;
            MAX=max;
            if(min-1>max-min-1){
            cout<<-1<<endl;
            continue;
        }
        }
        else if(b>a){
            min=a;
            max=b;
            MIN=min;
            MAX=max;
            if(min-1>max-min-1){
            cout<<-1<<endl;
            continue;
            }
        }
        else if(a==b){
            cout<<-1<<endl;
            continue;
        }
            while(MIN!=1){
                A--;B--;
                MIN--;
                MAX--;
            }
            int h_num=MAX-2;
            
            int total=(2*h_num)+2;
            if(c>total){
                cout<<-1<<endl;
                continue;
            }
            else{
                if(c>max){
                    while(max!=c){
                        max++;min++;
                    }
                    cout<<min<<endl;
                }
                else if(c<max){
                    while(max!=c){
                        min--;max--;
                        if(min==0){
                            min=total;
                        }
                    }
                    cout<<min<<endl;
                }
                else if(c==max){
                    cout<<min<<endl;
                }
                else if(c==min){
                    cout<<max<<endl;
                }
            }
        
    }
    return 0;
}