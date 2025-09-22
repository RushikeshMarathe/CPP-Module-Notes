#include<iostream>
using namespace std;

class Employee{

    private:
        int id;
        string name;
        double salary,hra=50,medical =1000,pf=12,pt=200,net_salary,gross_salary;

    public:

        void getEmployeeData()
        {
            cout<<"\n Enter Employee Id : ";
            cin>>this->id;

            cout<<"\n Enter Employee Name : ";
            cin>>this->name;

            cout<<"\n Enter Employee Salary : ";
            cin>>this->salary;
        }

};