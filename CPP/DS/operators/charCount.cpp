#include<iostream>
using namespace std;
int main()
{
    char c;
    int charC=0,inC=0,spaceC=0;
    while((c=cin.get())!='$') {
        if((c>='a'&&c<='z')||(c>='A'&&c<='Z')){
            charC++;
        }
        if(c==' '){
            spaceC++;
        }
        if(c>='0'&&c<='9'){
            inC++;
        }
    }
    cout<<charC<<" "<<inC<<" "<<spaceC;
    return 0;
}