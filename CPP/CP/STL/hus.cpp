#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

typedef long long l;

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<l> v=vector<l>(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end(),greater<int>());
    int q;
    int soFar=0;
    l ans;
    queue<l> qu;
    int it=0;
    while (m--)
    {
        cin>>q; 
        for(;soFar<q;soFar++){
            if(it<n&&(qu.empty()|| v[it]>qu.front())){
                ans=v[it++];
                
            }
            else{
                ans=qu.front();
                qu.pop();
            }
            qu.push(ans/2); 
        }
        cout<<ans<<endl;
    }
}
