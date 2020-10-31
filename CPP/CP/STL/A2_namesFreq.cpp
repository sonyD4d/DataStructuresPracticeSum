#include<bits/stdc++.h>
#include<map>
#include<string>
#include<iostream>
using namespace std;
int main()
{
    map<string,int> freq;
    string s;
    getline(cin,s);
    stringstream c1(s);
    int i=0;
    int spos=0;
    vector<string> temp;
    string t;
    while (getline(c1,t,' '))
    {
        freq[t]++;
    }
    map<string,int>::iterator it;
    int count=0;
    for(it=freq.begin();it!=freq.end();it++){
        if(it->second>1){
            cout<<it->first<<" "<<it->second<<endl;
            count++;
        }
    }
    if(count==0){
        cout<<"-1";
    }
    return 0;
}