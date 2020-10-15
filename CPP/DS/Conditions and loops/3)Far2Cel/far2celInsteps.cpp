/*
 * T(°C) = (T(°F) - 32) × 5/9
 *  0 <= S <= 80
    S <= E <=  900
    0 <= W <= 40 
 */
#include<iostream>
using namespace std;
int main()
{
    int startF,endF,step;
    cin>>startF>>endF>>step;
    if((startF<0||startF>80) || (endF<startF||endF>900) || (step<0||step>40)){
        cout<<"-1";
        return 0;
    }
    int cel;
    while(startF<=endF){
        cel = ((float)startF-32)*((float)5/9);
        cout<<startF<<"\t"<<cel<<endl;
        startF+=step;
    }
    return 0;
}