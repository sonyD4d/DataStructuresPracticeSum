#include <iostream>
#include <string.h>
using namespace std;
void swap(char input[],int i,int j){
    char temp=input[i];
    input[i]=input[j];
    input[j]=temp;
}
void reverse(char input[],int start,int end){
    int i=start,j=end;
    while (i<=j)
        swap(input,i++,j--);
}
void reverseStringWordWise(char input[]) {
    reverse(input,0,strlen(input)-1);
    int start=0,end=0;
    while (end<strlen(input))
    {
        while (input[end]!=' '&&end<strlen(input))
        {
            end++;
        }
        reverse(input,start,end-1);
        start=++end;  
    }
    
}
int main() {
    char input[1000];
    cin.getline(input, 1000);
    reverseStringWordWise(input);
    cout << input << endl;
}
