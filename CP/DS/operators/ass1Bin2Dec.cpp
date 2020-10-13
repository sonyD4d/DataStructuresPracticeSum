#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int deg=0;
    long int bin;
    cin>>bin;
    if(bin<0 || bin>pow(10,9)){
        cout<<"-1";
        return 0;
    }
    long int dec=0;
    while(bin>0){
        dec+=bin%10*pow(2,deg);
        deg++;
        bin/=10;
    }
    cout<<dec;
    return 0;
}