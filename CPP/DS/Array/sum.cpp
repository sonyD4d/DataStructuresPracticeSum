#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    int *arr= new int[n];
    for (size_t i = 0; i < n; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<sum;
    return 0;
}