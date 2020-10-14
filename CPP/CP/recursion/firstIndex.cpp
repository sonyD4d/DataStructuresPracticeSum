#include<iostream>
using namespace std;
int firstIndex(int input[], int size, int x) {
    if(size==1 && input[0]!=x){
        return -1;
    }
    if(input[0]==x){
        return 0;
    }
    else{
        int temp=firstIndex(input+1,size-1,x);
        if(temp == -1){
            return -1;
        }
        else{
            return temp+1;
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
    cout << firstIndex(input, n, x) << endl;
}


