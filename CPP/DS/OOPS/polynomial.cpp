#include <vector>
#include <climits>
#include <iostream>
using namespace std;

class Polynomial {
    int *degCoeff;      
    int curMax;
    
    public:
    	Polynomial(){
            degCoeff = new int[3];
        	for(size_t i=0;i<3;i++){
                degCoeff[i]=0;
            }
            curMax = 3;
        }
        Polynomial(Polynomial *p) {
            curMax = p->curMax;
            
        }
    	void setCoefficient(int degree,int coeff){
            if(coeff>=curMax){
                int *dup = new int[curMax*2];
                for(size_t i=0;i<curMax;i++){
                    dup[i]=degCoeff[i];
                }
                //delete [] degCoeff;
                degCoeff = dup;
                for(size_t i=0;i<curMax;i++){
                    cout<<degCoeff[i];
                }
                curMax*=2;
            }
            degCoeff[degree]=coeff;
    	}
        void print(){
            for(size_t i=0;i<curMax;i++){
                if(degCoeff[i]!=0){    
                    cout<<degCoeff[i]<<"x"<<i<<" ";
                }
            }
        }
    
};

//Driver program to test above functions
int main()
{
    int count1,count2,choice;
    cin >> count1;
    
    int *degree1 = new int[count1];
    int *coeff1 = new int[count1];
    
    for(int i=0;i < count1; i++) {
        cin >> degree1[i];
    }
    
    for(int i=0;i < count1; i++) {
        cin >> coeff1[i];
    }
    
    Polynomial first;
    for(int i = 0; i < count1; i++){
        first.setCoefficient(degree1[i],coeff1[i]);
    }
    first.print();
    //cin >> count2;
    /*
    int *degree2 = new int[count2];
    int *coeff2 = new int[count2];
    
    for(int i=0;i < count2; i++) {
        cin >> degree2[i];
    }
    
    for(int i=0;i < count2; i++) {
        cin >> coeff2[i];
    }
    
    Polynomial second;
    for(int i = 0; i < count2; i++){
        second.setCoefficient(degree2[i],coeff2[i]);
    }*/
    
    //cin >> choice;
    
    /*switch(choice){
            // Add
        case 1:
        {
            //Polynomial result1 = first + second;
            result1.print();
            break;
        }
            // Subtract
        case 2 :
        {
            Polynomial result2 = first - second;
            result2.print();
            break;
        }
            // Multiply
        case 3 :
        {
            Polynomial result3 = first * second;
            result3.print();
            break;
        }
        case 4 : // Copy constructor
        {
            Polynomial third(first);
            if(third.degCoeff == first.degCoeff) {
                cout << "false" << endl;
            }
            else {
                cout << "true" << endl;
            }
            break;
        }
            
        case 5 : // Copy assignment operator
        {
            Polynomial fourth(first);
            if(fourth.degCoeff == first.degCoeff) {
                cout << "false" << endl;
            }
            else {
                cout << "true" << endl;
            }
            break;
        }
            
    }
    */
    return 0;
}