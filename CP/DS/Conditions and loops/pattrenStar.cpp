#include<iostream>
using namespace std;
int main()
{   
    int n;
    cin>>n;
    int i=1,j=1;
    while(i<=n){
        j=1;
        while(j<= n-i){
            cout<<" "; j+=1;
        }
        j=1;
        while (j<=(2*(i-1)+1))
        {
            cout<<"*"; j+=1;
        }
        cout<<endl;
        i+=1;
    }
    return 0;
}