#include<iostream>
#include<map>
#include<vector>
using namespace std;

int main(){
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    map<int,int> m;
    int i=0;
    int vote;
    while (i<(n1+n2+n3))
    {
        cin>>vote;
        m[vote]++;
        i++;
    }
    map<int,int>::iterator it;
    int voters=0;
    for(it=m.begin();it!=m.end();it++){
        if(it->second>1){
            //cout<<it->first<<" ";
            voters++;
        }
    }
    cout<<voters<<endl;
    for(it=m.begin();it!=m.end();it++){
        if(it->second>1){
            cout<<it->first<<endl;
        }
    }
    return 0;
}