#include<bits/stdc++.h>
#include<map>
using namespace std;
int main()
{
    map<char,int> freq;
    long n;
    cin>>n;
    char temp;
    while(n--){
        cin>>temp;
        if(temp == 'a'||temp == 's'||temp == 'p')
        	freq[temp]++;
    }
    map<char,int>::iterator it;
    int a=0,s=0,p=0;
    for(it=freq.begin();it!=freq.end();it++){
        if(it->first=='a'){
            a=it->second;
        }
        if(it->first=='s'){
            s=it->second;
        }
        if(it->first=='p'){
            p=it->second;
        }
    }
    cout<<a<<" "<<s<<" "<<p;
	return 0;
}
