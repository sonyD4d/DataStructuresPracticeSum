#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long n;
    cin>>n;
    if(n<0 || n>pow(10,7)){
        cout<<"-1";
        return 0;
    }
    int first,temp,flagInc=1,flagDec=1;
    cin>>first;
    for(int i=0;i<n-1;i++){
        cin>>temp;
        if(flagDec){
            if(temp<first){
                first=temp;
                continue;
            }
            else
            {
                flagDec=0;
            }
            
        }
        if(flagInc && !flagDec)
        {
            if(temp>first){
                first=temp;
                continue;
            }
            else
            {
                flagInc=0;
            }
        }
    }
    if(flagInc){
        cout<<"true";
    }
    else{
        cout<<"false";
    }

    return 0;
}