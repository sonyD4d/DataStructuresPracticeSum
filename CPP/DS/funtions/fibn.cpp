#include<iostream>
using namespace std;

bool checkMember(int n){
    int n0=0,n1=1,fib=0;
    while (fib<=n)
    {
        fib=n1+n0;
        if(fib == n || n == 0){
            return true;
        }
        n0=n1; n1=fib;
    }
    return false;
    
}

int main(){
    int n; 
    cin >> n ;
    if(checkMember(n)){
        cout << "true" << endl;
    }else{
        cout << "false" << endl;
    }
}


