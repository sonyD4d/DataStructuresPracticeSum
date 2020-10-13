#include<iostream>
#include<math.h>
using namespace std;
int main(){
    long int n;
    long int rev=0;
    cin>>n;
    if(n<0 || n>pow(10,8)){
        cout<<"-1";
        return 0;
    }
    while(n>0){
        rev= (rev*10)+ n%10;
        n/=10;
    }
    cout<<rev;
    return 0;
}