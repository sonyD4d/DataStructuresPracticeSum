#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n<1||n>25){
        cout<<"-1";
        return 0;
    }
    int sum0=0,sum1=1,tmp;
    for(int i=0;i<n-1;i++){
        tmp=sum1;
        sum1+=sum0;
        sum0=tmp;
    }
    cout<<sum1;
    return 0;
}