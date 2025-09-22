#include<iostream>
using namespace std;

template <class calC>
class Calculator{
    calC a,b;


    public:

    Calculator(calC& a,calC& b){
        this->a = a;
        this->b = b;
    }

    calC add(calC& a,calC& b)
    {
        return a+b;
    }

    calC subtract(calC& a,calC& b)
    {
        return a-b;
    }

    calC multiply(calC& a,calC& b)
    {
        return a*b;
    }

    calC divide(calC& a,calC& b)
    {
        return a/b;
    }


};


int main(){
    // int a,b;
    double a,b;



     cout<<"\nEnter value of Num1 = ";
    cin>>a;

    cout<<"\nEnter value of Num1 = ";
    cin>>b;

    Calculator<double> cObj(a,b);
    
    cout<<"\nAddition of Two number : "<<cObj.add(a,b)<<endl;
    cout<<"\nSubtraction of Two number : "<<cObj.subtract(a,b)<<endl;
    cout<<"\nMultiplication of Two number : "<<cObj.multiply(a,b)<<endl;
    cout<<"\n Divide of Two number : "<<cObj.divide(a,b)<<endl;


}