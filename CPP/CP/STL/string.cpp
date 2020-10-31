#include<iostream>
#include<string>

using namespace std;

int main(int argc, char const *argv[]) {
    string s = "sonyD4d";
    string s2(s);    //copy
    string s3(s,1,3); // copy .from .to
    string s4 =  s.substr(1,3);
    if(s3.compare(s4)==0){
        cout<<"true";
    }
    //cout<<s3;
    return 0;
}
