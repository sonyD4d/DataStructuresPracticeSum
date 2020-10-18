#include<iostream>
#include<string.h>
using namespace std;
void printSubstrings(char str[]){
    for (size_t i = 0; i<strlen(str); i++)
    {
        for(int j=i;j<strlen(str);j++){
            for (size_t k = i; k<=j; k++)
            {
                cout<<str[k];
            }
            cout<<endl;
            
        }
    }
    

}

int main(){

  char str[10000];
  cin.getline(str,10000);

  printSubstrings(str);
}

