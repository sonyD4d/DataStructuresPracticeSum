#include<iostream>
using namespace std;


int main(){

    int m,n;
    cin>>m>>n;
    int arr[m][n];
    int sum=0;
    for(size_t i=0;i<m;i++){
        for(size_t j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(size_t i=0;i<n;i++){
        for(size_t j=0;j<m;j++){
            sum+=arr[j][i];
        }
        cout<<sum<<" ";
        sum=0;
    }
  
}

