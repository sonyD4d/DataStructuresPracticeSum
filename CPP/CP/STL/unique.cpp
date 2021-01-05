#include<iostream>
#include<set>
#include<string.h>
#include<vector>

using namespace std;

char* uniqueChar(char *str){
    set<char> s;
    vector<char> res; int j=0;
    for (size_t i = 0; i < strlen(str); i++)
    {
        if(s.find(str[i])==s.end()){
            s.insert(str[i]);
            res.push_back(str[i]);
        }
    }
    char* finalRes= new char[res.size()];
    for(auto i=res.begin();i!=res.end();i++){
        finalRes[j++]=*i;
    }
    return finalRes;  
}

int main() {

	char input[1000000];
	cin >> input;
	cout << uniqueChar(input) << endl;
}
