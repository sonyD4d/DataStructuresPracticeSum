#include<iostream>
using namespace std;

int lastIndex(int input[], int size, int x) {
    if(size==1 && input[size-1]!=x){
        return -1;
    }
    if(input[size-1]==x){
        return size-1;
    }
    else{
        int temp=lastIndex(input,size-1,x);
        if(temp == -1){
            return -1;
        }
        else{
            return temp;
        }
    }
}

int main(){
    int n;
    cin >> n; 
    int *input = new int[n];   
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    int x;
    
    cin >> x;
    
    cout << lastIndex(input, n, x) << endl;

}
