#include<iostream>
using namespace std;

int allIndexes(int input[], int size, int x, int output[]) {
    if(size==0)
        return 0;
    int temp = allIndexes(input+1,size-1,x,output);
    for(int i=0;i<temp;i++)
        output[i]++;
    //cout<<"here   "<<"x "<<x<<"  in"<< input[0]<<endl;
    if(input[0]==x){
        for (int i = temp; i>0; i--)
            output[i]=output[i-1];
        output[0]=0;
        //cout<<"in:"<<size<<"  "<<temp;
        return temp+1;
    }
    else
    {
        return temp;
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
    int *output = new int[n];
    int size = allIndexes(input, n, x, output);
    for(int i = 0; i < size; i++) {
        cout << output[i] << " ";
    }
    
    delete [] input;
    
    delete [] output;
    

}


