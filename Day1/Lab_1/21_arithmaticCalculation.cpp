#include<iostream>
using namespace std;

int main()
{
    int operand1,operand2;
    char sign;
    cout<<"Enter Two digit for arithmatic operation (+ - * /) : ";
    cin>>operand1>>operand2;

    cout<<"Enter a character for arithmatic operation (+ - * /) : ";
    cin>>sign;

    if(sign == '+')
    {
        cout<<"Addition of "<<operand1<<" + "<<operand2<<" : "<<operand1+operand2;
    }else if(sign == '-'){
        cout<<"Subtraction of "<<operand1<<" - "<<operand2<<" : "<<operand1-operand2;
    }else if(sign == '*')
    {
        cout<<"Multiplication of "<<operand1<<" * "<<operand2<<" : "<<operand1*operand2;
    }else if(sign == '/'){
        cout<<"Division of "<<operand1<<" / "<<operand2<<" : "<<operand1/operand2;
    }else{
        cout<<"Invalid Operator!....";
    }
}