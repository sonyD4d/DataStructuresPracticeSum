#include <iostream>
using namespace std;
void removeAllOccurrencesOfChar(char input[], char c) {
    int index=0;
    for(int i=0;input[i]!='\0';i++){
        if(input[i]!=c){
            input[index++]=input[i];
        }
    }
    input[index]='\0';
}
int main() {
    char input[1000];
    cin.getline(input, 1000);
    char c;
    cin >> c;
    removeAllOccurrencesOfChar(input, c);
    cout << input << endl;
}
