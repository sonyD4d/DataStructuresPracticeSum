#include <iostream>
#include <cstring>
using namespace std;

void stringCompression(char input[]) {
    int index=0,count=1;
    for (size_t i = 0; input[i]!='\0'; i++)
    {
        while(input[i]==input[i+1]){
            count++;
            i++;
        }
        input[index++]=input[i];
        if(count>1){
            input[index++]=char(count +'0');
        }
        count=1;
    }
    input[index]='\0';
}

int main() {
    char str[1000];
    cin.getline(str, 1000);
    stringCompression(str);
    cout << str;
}