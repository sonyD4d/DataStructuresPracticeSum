#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1,pr=1,j;
    while(i<=n){
        j=1;
        pr=i;
        while (j<=i)
        {
            cout<<pr;
            pr+=1;
            j+=1;
        }
        cout<<endl;
        i+=1;        
    }
    return 0;
}