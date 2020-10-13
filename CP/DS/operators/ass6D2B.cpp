#include<iostream>
#include<math.h>
using namespace std;
void d2b(long n){
    if(n){
        d2b(n/2);
        cout<<n%2;
    }
}
int main()
{
    long n;
    cin>>n;
    if(n<0||n>pow(10,5)){
        cout<<"-1";
        return 0;
    }
    if(n==0){
        cout<<0;
    }
    else{
        d2b(n);
    }
    return 0;
}