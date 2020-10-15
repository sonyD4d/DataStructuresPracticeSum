#include<iostream>
using namespace std;
int main()
{
    int arr[7]={1,2,3,4,-40,6,7};
    int cSum=0;
    int maxSum=0;
    int temp;
    for (size_t i = 0; i < 7; i++)
    {
        temp=cSum+arr[i];
        if(cSum<=temp){
            cSum=temp;
            maxSum=cSum;
        }
        else{
            cSum=0;
        }
    }
    cout<<maxSum;
    
    return 0;
}