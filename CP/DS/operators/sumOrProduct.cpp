#include<iostream>
using namespace std;
int main(){
    long out=1;
    int n,choice,i;
    cin>>n;
    cin>>choice;
    if(n<1 || n>12){
        cout<<"-1";
        return 0;
    }
    switch (choice)
    {
    case 1:
        for(i=2;i<=n;i++){
            out+=i;
        }
        cout<<out;
        break;
    case 2:
        for(i=2;i<=n;i++){
            out*=i;
        }
        cout<<out;
        break;
    default:
        cout<<"-1";
        break;
    }
    return 0;
}