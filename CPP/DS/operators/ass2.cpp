#include<iostream>
using namespace std;
// +6 +3 +3
int main(){
    int n,ap[3]={6,3,3},start=5;
    cin>>n;
    if(n<1 ||n>1000){
        cout<<"-1";
        return 0;
    }
    cout<<start;
    for(int i = 0;i<n-1;i++){
        start+=ap[i%3];
        cout<<" "<<start;
    }
    return 0;
}