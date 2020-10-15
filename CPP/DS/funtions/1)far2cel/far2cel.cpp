#include<iostream>
using namespace std;
void printTable(int start, int end, int step) {
    if((start<0||start>80) || (end<start||end>900) || (step<0||step>40)){
        cout<<"-1";
        return;
    }
    int cel;
    while(start<=end){
        cel = ((float)start-32)*((float)5/9);
        cout<<start<<"\t"<<cel<<endl;
        start+=step;
    }
}
int main()
{
    int start, end, step;
    cin >> start >> end >> step;
    printTable(start, end, step);
    return 0;
}