#include <iostream>
using namespace std;
#include <string.h>

bool isPermutation(char input1[], char input2[]) {
    if(strlen(input1)!=strlen(input2))
        return false;
    int freq[128]={0};
    for (size_t i = 0; i < strlen(input1); i++)
    {
        freq[int(input1[i])]++;
    }
    for (size_t i = 0; i < strlen(input2); i++)
    {
        freq[int(input2[i])]--;
    }
    for (size_t i = 0; i < 128; i++)
    {
        if(freq[i]!=0)
            return false;
    }
    return true;    
}
int main() {
    char input1[1000], input2[1000];
    cin.getline(input1, 1000);
    cin.getline(input2, 1000);
    if(isPermutation(input1, input2) == 1) {
        cout << "true";
    }
    else {
        cout << "false";
    }
}
