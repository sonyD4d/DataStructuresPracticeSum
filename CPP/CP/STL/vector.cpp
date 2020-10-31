#include<iostream>
#include<vector>
#include<map>
using namespace std;

int main(int argc, char const *argv[]) {
    map<int,vector<int>> v ;// size[optional]= vector<int>(5); 
    map<int,vector<int>>::iterator it;
    v[1].push_back(3);//push elements
    v[1].push_back(2);
    v[3].push_back(10);
    //v[1].pop_back();
    for(it = v.begin();it!=v.end();it++){
        cout<<it->first<<endl;
        while (it->second.size()!=0)
        {
            cout<<it->second.back()<<" ";
            it->second.pop_back();
        }
        cout<<endl;
        
    }
    return 0;
}
