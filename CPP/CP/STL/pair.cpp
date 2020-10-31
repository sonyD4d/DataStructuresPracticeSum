#include <iostream>
#include <utility>

using namespace std;

int main(){
    pair<int,char> p(1,'a');
    pair<int,char> p1;
    p1 = make_pair(2,'b');
    p.second='c';
    cout<<p1.first<<p.second;
}