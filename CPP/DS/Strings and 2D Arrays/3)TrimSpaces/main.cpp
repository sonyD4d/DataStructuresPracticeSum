#include <iostream>
using namespace std;
void trimSpaces(char input[]) {
    int i=0,j;
    while (input[i]!=' ') {i++;}
    j=i+1;
    for(;input[j]!='\0';j++){
        if(input[j]!=' ')
            input[i++]=input[j];
    }
    input[i]='\0';
    
}


int main() {
    char input[1000000];
    cin.getline(input, 1000000);
    trimSpaces(input);
    cout << input << endl;
}


