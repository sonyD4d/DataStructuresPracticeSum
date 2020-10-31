#include<iostream>
#include<map>
#include<vector>
#include<string>

using namespace std;

int main(){
    int t;
    cin>>t;
    string str;
    while(t--){
        cin>>str;
        map<char,vector<int>> freq;
        for(int i=0;i<str.length();i++){
            freq[str[i]].push_back(i);
        }
        map<char,vector<int>>::iterator i;
        int oddC=0;
        for(i=freq.begin();i!=freq.end();i++){
            if(i->second.size()%2 !=0){
                oddC++;
                if(oddC>=2){
                    cout<<"-1"<<endl;
                    break;
                }
            }
        }
        if(oddC>=2){
                    continue;
        }
        
        int stratP=0,endP=str.length()-1,mid=str.length()/2;
        int res[str.length()]={0};
        
        for(i=freq.begin();i!=freq.end();i++){
            if(i->second.size()%2==1){
                res[mid]=i->second.back();i->second.pop_back();
            }
            while (i->second.size()>0)
            {
                res[stratP++]=i->second.back();i->second.pop_back();
                res[endP--]=i->second.back();i->second.pop_back();
            }
            
        }
        for (size_t i = 0; i < str.length(); i++)
        {
            cout<<res[i]+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}