#include<iostream>
#include<vector>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);    
    vector<int> start;
    vector<int> end;
    int time;
    for (size_t i = 0; i < n; i++)
    {
        scanf("%d",&time);
        start.push_back(time);
    }
    for (size_t i = 0; i < n; i++)
    {
        scanf("%d",&time);
        end.push_back(time);
    }
    int active[2400]={0};
    for (auto i=start.begin(),j=end.begin();i!=start.end(),j!=end.end();i++,j++){
        int st=*i;
        while (st<=*j)
        {
            active[st]++;
            st++;
        }
    }
    cout<<*max_element(active, active + 2400);;
    return 0;
}