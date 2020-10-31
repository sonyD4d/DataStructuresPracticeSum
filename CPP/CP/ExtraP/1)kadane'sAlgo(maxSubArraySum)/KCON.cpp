#include<iostream>
using namespace std;

typedef long long l;

l kadane(l arr[],l n){
    l maxSoFar=INT32_MIN,currSum=0;
    for (l i = 0; i < n; i++)
    {
        currSum+=arr[i];
        if(currSum>maxSoFar){
            maxSoFar=currSum;
        }
        if(currSum<0){
            currSum=0;
        }
    }
    return maxSoFar;
}
l max(l a,l b){
    return a>b?a:b;
}
l solve(l arr[],l n,l k){
    l sum = kadane(arr,n);
    if(k==1) return sum;
    else{
        l suffix=0,prefix=0,prefixSoFar=INT32_MIN,suffixSoFar=INT32_MIN,final=0;
        for (size_t i = 0; i < n; i++)
        {
            prefix+=arr[i];
            prefixSoFar=max(prefix,prefixSoFar);
        }
        if(prefixSoFar>0){
            final = prefixSoFar;
        }
        for (int i = n-1; i >=0; i--)
        {
            suffix+=arr[i];
            suffixSoFar=max(suffix,suffixSoFar);
        }
        if(suffixSoFar>0){
            final+=suffixSoFar;
        }
        l result = max((final+(k-2)*sum),sum);
        return result;
    }
}
int main(){
    l t=0,n,k;
    cin>>t;
    cout<<endl;
    while (t>0)
    {
        cin>>n>>k;
        l* arr = new l[n];
        for (l i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        cout<<solve(arr,n,k);
        t--;
    }
    return 0;
}