#include<iostream>
using namespace std;
int power(int x, int n) {
    if(x<1||x>30||n<=0||n>30){
        return 1;
    }
    return (x*power(x,n-1));
}

int main()
{
    cout<<power(3,3);
    return 0;
}