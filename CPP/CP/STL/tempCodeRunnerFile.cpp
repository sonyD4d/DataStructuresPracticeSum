#include <iostream>
#include<map>
#include <vector>
using namespace std;
vector<int> longestConsecutiveIncreasingSequence(int *arr, int n){
	map<int,bool> m;
    int  start=-1,longest=0;
    for(int i=0;i<n;i++){
        m[arr[i]]=true;
    }
    int maxStart,maxEnd,curEnd,curStart;
    int maxCount = 0,curCount=0;
    for(int i=0;i<n;i++){
        curStart=arr[i];
        curEnd=curStart;
        if(arr[i]){
            m[arr[i]]=false;
            int j=arr[i]+1;
            while(m[j]){
                curEnd=m[j];
                m[j]=false;
                ++j;
                curCount++;
            }
            j=arr[j]-1;
            while(m[j]){
                curStart=m[j];
                m[j]=false;
                --j;
                curCount++;
            }
            cout<<endl;
            if(curCount>maxCount){
                maxCount=curCount;
                maxStart=curStart;
                maxEnd=curEnd;
            }
            curCount=0;
        }
    }  
    vector<int> ans;
    ans.push_back(maxStart);
    ans.push_back(maxEnd);
    cout<<maxStart<<" "<<maxEnd<<endl;
    return ans;
    
}
int main() {
    int size;
    cin >> size;
    int* arr = new int[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    vector<int> ans = longestConsecutiveIncreasingSequence(arr, size);
    cout << ans[0];
    if (ans.size() > 1) {
       cout << " " << ans[ans.size() - 1];
    }
    delete[] arr;
    return 0;
}
