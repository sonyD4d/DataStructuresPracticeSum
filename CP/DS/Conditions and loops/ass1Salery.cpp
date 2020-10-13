#include<iostream>
#include<math.h>
using namespace std;

int main() {
	double basic;
    int allow;
    char grade;
    cin>>basic>>grade;
    if(grade == 'A'){
        allow=1700;
    }
    else if(grade=='B'){
        allow=1500;
    }
    else{
        allow=1300;
    }
    double total = basic + 0.2*basic + 0.5*basic + allow - 0.11*basic ;
    cout<<int(round(total));
}
