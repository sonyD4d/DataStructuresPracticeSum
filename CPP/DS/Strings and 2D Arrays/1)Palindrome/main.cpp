#include<iostream>
#include<string.h>
using namespace std;

bool checkPalindrome(char str[]){
    int len=strlen(str);
    int i=0,j=len-1;
    while (i<j)
    {
        if (str[i++]!=str[j--])
            return false;
    }
    return true;    
}

int main(){

    char str[10000];
    cin.getline(str,10000);

    if(checkPalindrome(str)){
  	    cout << "true" << endl; 	
    }else{
  cout << "false" << endl;
  }
}

