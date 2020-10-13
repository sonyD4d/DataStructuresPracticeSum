#include<iostream>
using namespace std;
int isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0)
            return 1;
    }
    return 0;
}
int main()
{
    int n;
    cin>>n;
    //cout<<isPrime(n);
    if(n<1||n>100){
        cout<<"-1";
        return 0;
    }
    int i=2;
    while(i<=n){
        switch (isPrime(i))
        {
        case 0 :
            cout<<i<<endl;
            break;
        default:
            break;
        }
        i++;
    }
    return 0;
}