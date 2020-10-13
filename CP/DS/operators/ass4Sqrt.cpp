#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long n;
    cin>>n;
    if(n<0 || n>pow(10,8)){
        cout<<"-1";
        return 0;
    }
    long low=1,high=n,mid;
    mid = (low+high)/2;
    long res = mid*mid;
    while(low<=high){
        if(res<=n){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
        mid = (low+high)/2;
        res = mid*mid;
        //cout<<res;
    } 
    cout<<mid;
    
    return 0;
}