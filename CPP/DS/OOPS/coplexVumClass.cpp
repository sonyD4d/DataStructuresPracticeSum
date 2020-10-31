#include<iostream>
using namespace std;
class ComplexNumbers {
    // Complete this class
    private:
    	int real;
    	int img;
    public:
        ComplexNumbers(int r,int j){
            real=r;
            img=j;
        }
        void plus(ComplexNumbers &s){
            this->real+=s.real;
            this->img+=s.img;
        }
        void multiply(ComplexNumbers &s){
            int i = this->real*s.img + s.real*this->img;
            int i2= this->img*s.img;
            this->real = this->real*s.real-i2;
            this->img = i; 
        }
        void print(){
            cout<<real<<" + i"<<img;
        }
    
};

int main() {
    int real1, imaginary1, real2, imaginary2;
    
    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;
    
    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);
    
    int choice;
    cin >> choice;
    
    if(choice == 1) {
        c1.plus(c2);
        c1.print();
    }
    else if(choice == 2) {
        c1.multiply(c2);
        c1.print();
    }
    else {
        return 0;
    }
    
}
