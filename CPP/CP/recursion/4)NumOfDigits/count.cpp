#include<iostream>
using namespace std;
int count(int n){
    if(n == 0){
        return 1;
    }
    return count(n/10) + (((n/10)>0)?1:0);
}
int main()
{
    cout<<count(456);
    return 0;
}