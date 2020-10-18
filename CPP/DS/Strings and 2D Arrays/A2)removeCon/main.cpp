#include <iostream>
using namespace std;

void removeConsecutiveDuplicates(char input[]) {
    int unique=0;
    for (size_t i = 0; i < input[i]!='\0'; i++)
    {
        if(input[i]!=input[i+1]){
            input[unique++]=input[i];
        }
    }
    input[unique]='\0';
    
}
int main() {
    char input[1000];
    cin.getline(input, 1000);
    removeConsecutiveDuplicates(input);
    cout << input << endl;
}
