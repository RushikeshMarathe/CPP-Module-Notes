#include<iostream>
using namespace std;

int main()
{
    double basic_sal,tax=0;

    cout<<"\n Enter you basic salary : ";
    cin>>basic_sal;
    
    if(basic_sal < 150000)
    {
        tax = 0;

    }else if (basic_sal>= 150000 && basic_sal <=300000)
    {
        tax = (20.0 / 100.0) * basic_sal;
    }else{
        tax =tax = (30.0 / 100.0) * basic_sal;
    }

    cout<<"Tax for you Salary = "<<tax<<endl;

    return 0;
    
    
}