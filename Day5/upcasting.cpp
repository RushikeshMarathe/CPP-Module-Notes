#include <iostream>
#include <typeinfo>
using namespace std;

class Employee{
    private:
        int id;
        string name;
        double salary;

    public:
        Employee(){
                cout<<"E"<<endl;

        }
        Employee(int id,string name,double salary){
            this->id=id;
            this->name=name;
            this->salary=salary;
        }


        double calculateSalary(){
            return this->salary;
        }

        virtual void display(){
            cout<<"Employee Id : "<<this->id<<endl;
            cout<<"Employee Name : "<<this->name<<endl;            
        }
};




class Manager : public Employee{
    private :
        double incentives;

    public:
        Manager(){
                cout<<"M"<<endl;

        }

        Manager(int id,string name,double salary,double incentives):Employee(id,name,salary){
            cout<<"*M"<<endl;
            this->incentives = incentives;
        }


        double calculateSalary(){
            return Employee::calculateSalary() + incentives;
        }

        void display(){
            cout<<"\n-----Manager Details-----"<<endl;
            Employee::display();         
            cout<<"Employee Incentives : "<<this->incentives<<endl;
        }

        void MonitorProjectS(){
            cout<<"\nManager Monitoring Projects!..."<<endl;
        }
};


class SalesPerson:public Employee{
    private:
        int hourWorked;
        double hourlyRate;

        public:
            SalesPerson(){
                cout<<"S"<<endl;

            }

            SalesPerson(int id,string name,double salary,int hourWorked,double hourlyRate):Employee(id,name,salary){
                cout<<"->S"<<endl;
                this->hourWorked = hourWorked;
                this->hourlyRate = hourlyRate;
            }

        double calculateSalary(){
            return Employee::calculateSalary() + (hourWorked*hourlyRate);
        }

        void display(){
            cout<<"\n-----Sales Person's Details-----"<<endl;
            Employee::display();         
            cout<<"Employee Hours of Worked : "<<this->hourWorked<<endl;
            cout<<"Employee Hourly Rate : "<<this->hourlyRate<<endl;
        }

        void SalesProduct(){
            cout<<"\n SalesPerson Saling Projects!..."<<endl;
        }
};


int main(){
    Employee *EmpArray[2];

    Manager m1(101,"rushikesh",40000,1000);
    SalesPerson s1(102,"rushikesh",50000,8,3000);

    EmpArray[0] = &m1;
    EmpArray[1] = &s1;


    EmpArray[0]->display();
    cout<<"Employee Salary : "<<EmpArray[0]->calculateSalary()<<endl;
    EmpArray[1]->display();
    cout<<"Employee Salary : "<<EmpArray[1]->calculateSalary()<<endl;


    for(int i=0;i<2;i++){
        if(typeid(*EmpArray[i]) == typeid(Manager))
        {
            Manager *Mgr = dynamic_cast<Manager*>(EmpArray[i]);
            Mgr->MonitorProjectS();
        }else if(typeid(*EmpArray[i])== typeid(SalesPerson))
        {
            SalesPerson *Sp = dynamic_cast<SalesPerson*>(EmpArray[i]);
            Sp->SalesProduct();
        }
    }

    return 0;

}