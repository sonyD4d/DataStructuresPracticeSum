#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        long long n,c;
        cin>>n>>c;
        long long pos[n];
        for (long long i = 0; i < n; i++){
            cin>>pos[i];
        }
        sort(pos,pos+n);
        long long start = pos[0];
        long long end = pos[n-1]-start;
        long long mid,res=0;
        long long cows,i,j,cur;
        while(start<=end){
            mid=start + (end-start)/2;
            //cout<<"start :" <<start<<" end :"<<end<<" mid :"<<mid<<endl;
            cows = 1;
            cur = pos[0];
            for(i=1;i<n;i++){
                if(pos[i]-cur>=mid){
                    cur=pos[i];
                    cows++;
                }
                if(cows==c){break;}
            }
            if(cows>=c){
                res=mid;
                //cout<<"here"<<mid<<" "<<endl;
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        cout<<res;
    }
}