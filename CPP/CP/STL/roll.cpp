#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<pair<string,int>,int> a,pair<pair<string,int>,int> b){ 
    if(a.second > b.second)
        return a.second > b.second;
    if(a.second==b.second)
        return a.first.second<b.first.second;
    return false;
}
int main()
{
    int n;
    cin>>n;
    cin>>ws;
    vector<pair<pair<string,int>,int>> m;
    string str; 
    int marks;
    int roll=1;
    for(int i=0;i<n;i++){
        cin>>str;
        int sum=0; 
        cin>>marks; sum+=marks; 
        cin>>marks; sum+=marks;
        cin>>marks; sum+=marks;
        m.push_back(make_pair(make_pair(str,i+1),sum));
    }
    sort(m.begin(),m.end(),cmp);
    int j=1;
    for(auto i=m.begin();i!=m.end();i++){
        cout<<j++<<" "<<i->first.first<<endl;//" "<<i->first.second<<" "<<i->second<<endl;
    }
        
	return 0;
}
