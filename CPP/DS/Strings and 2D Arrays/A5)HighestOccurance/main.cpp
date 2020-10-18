#include <iostream>
using namespace std;
// input - given string
char highestOccurringChar(char input[]) {
    int freq[256]={0};
    for (size_t i = 0; input[i]!='\0'; i++)
    {
        freq[int(input[i])]++;
    }
    int max=INT32_MIN,index=256;
    for (size_t i = 0; i <256 ; i++)
    {
        if(freq[i]>max){
            max=freq[i];
            index=i;
        }
    }
    return char(index);
}

int main() {
    char input[1000];
    cin.getline(input, 1000);
    cout << highestOccurringChar(input) << endl;
}
