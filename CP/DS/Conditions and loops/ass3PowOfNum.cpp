#include<iostream>
using namespace std;
int main()
{
    int num,power;
    cin>>num>>power;
    if(num<0||num>8){
        cout<<"-1";
        return 0;
    }
    if(power<0||power>8){
        cout<<"-1";
        return 0;
    }
    long result=1;
    int i=1;
    while(i<=power){
        result*=num;
        i++;
    }
    cout<<result;
    return 0;
}