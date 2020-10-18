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
void reverseEachWord(char input[]) {
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