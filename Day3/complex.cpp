#include<iostream>
using namespace std;

class complex{
    private:
        int r,i;

    public:
        complex(){

        }


        complex(int r,int i){
            this->r = r;
            this->i = i;

        }

        void setReal(int r){
            this->r = r;
        }

        void setImaginary(int i){
            this->i = i;
        }

        int getReal(){
            return this->r;
        }

        int getImaginary(){
            return this->i;
        }

        void display(){
            cout<<r<<" + "<<i<<"i"<<endl;
        }

        complex operator +(const complex& n1){
            int i1 = this->i + n1.i;
            int r1 = this->r + n1.r;
            complex new1(r1,i1);
            return new1;
        }


};


int main() {
    complex c1,c2;
    c1.setReal(3);
    c1.setImaginary(5);

    c2.setReal(1);
    c2.setImaginary(3);

    c1.display();
    c2.display();

    complex n1 = c1;

    // complex new1 = c1 + c2;
    n1.display();

    c1.setReal(7);
    c1.display();

    n1.display();
    // new1.display();
    return 0;
}