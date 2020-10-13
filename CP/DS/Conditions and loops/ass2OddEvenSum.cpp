#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long n;
    cin>>n;
    if(n<0||n>pow(10,8)){
        cout<<"-1";
        return 0;
    }
    int rem,oddSum=0,evenSum=0;
    while(n>0){
        rem=n%10;
        if(rem%2==0){
            evenSum+=rem;
        }
        else{
            oddSum+=rem;
        }
        n/=10;
    }
    cout<<evenSum<<" "<<oddSum;
    return 0;
}