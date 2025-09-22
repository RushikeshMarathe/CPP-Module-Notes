#include <iostream>
using namespace std;

class Employee{

    private:
        int id,deptID;
        string name;
    
    protected:
        double basicSalary;

    public:

        Employee(){
            id=101;
            deptID=2001;
            name:"ABC";
        }

        Employee(int id,string name,int deptID,double basicSalary)
        {
            this->id = id;
            this->name = name;
            this->deptID = deptID;
            this->basicSalary = basicSalary;
        }

        string getName(){
            return name;
        }

        double computeNetSalary()
        {
            return basicSalary;
        }
};

class Manager : public Employee{
    private:
        double perfBonus;

    public:
        static int managerCount;

    public:

        Manager(){
            perfBonus=1000;
        }

        Manager(int id,string name,int deptID,double basicSalary,double perfBonus):Employee(id,name,deptID,basicSalary)
        {
            this->perfBonus = perfBonus;
        }

        

        double computeNetSalary(){
            return perfBonus+perfBonus;
        }
};

int Manager :: managerCount = 0;


class Worker:public Employee
{
    private:
        int hoursWorked,hourlyRate;

    public:
        static int workerCount;

    public:

        Worker(){
            hourlyRate = 100;
            hoursWorked=9;
        }

        Worker(int id,string name,int deptID,double basicSalary,int hoursWorked,int hourlyRate):Employee(id,name,deptID,basicSalary){
            this->hourlyRate=hourlyRate;
            this->hoursWorked=hoursWorked;
        }

        int getHrlyRate()
        {
            return this->hourlyRate;
        }


        double computeNetSalary()
        {
            int netSalary = this->basicSalary + (hoursWorked * hourlyRate);
        }
};

int Worker :: workerCount = 0;



int main(){

    int choice;
    // int managerCount=0,workerCount = 0;




    Manager mgrObject[5];
    Worker wrkObject[5];

    do{
    cout<<"---- Organization Application ----";
    cout<<"\n1.Hire Manager.\n2.Hire Worker.\n3.Display Employees Net Salary.\n4.Exit. -----"<<endl;
    cout<<"\nEnter your choice : ";
    cin>>choice;

    switch (choice)
    {
    case 1:
        break;
    
    default:
        break;
    }

    switch(choice)
    {
    case 1:
    if(Manager::managerCount < 5)
    {
        int id,deptID;
        char name[10];
        double basic,perfBonus;



        cout<<"\n---- Manager Details ----"<<endl;
        cout<<"Enter Manager Employee ID : ";
        

        cout<<"\nEnter Manager Department ID : ";
        cin>>deptID;

        cout<<"\nEnter Manager Name : ";
        cin>>name;

        cout<<"\nEnter Manager Basic Salary : ";
        cin>>id;

        cout<<"\nEnter Performance Bonus : ";
        cin>>perfBonus;
        mgrObject[Manager::managerCount] = Manager(id,name,deptID,basic,perfBonus);
        Manager::managerCount = Manager::managerCount + 1;

    }else{
        cout<<"\nNO Vacancy for Manager.\n Please try after some time!..."<<endl;
    }
        break;


    case 2:
    if(Worker::workerCount<5){
        int id,deptID;
        char name[10];
        double basic;
        int hoursWorked;
        int hourlyRate;

        cout<<"\n---- WorkerWorker Details ----"<<endl;
        cout<<"Enter Worker Employee ID : ";
        cin>>id;

        cout<<"\nEnter Worker Department ID : ";
        cin>>deptID;

        cout<<"\nEnter Worker Name : ";
        cin>>name;

        cout<<"\nEnter Worker Basic Salary : ";
        cin>>id;

         cout<<"\nEnter Worker Working Hours : ";
        cin>>hoursWorked;

        cout<<"\nEnter Worker Hourly Rate : ";
        cin>>hourlyRate;

        wrkObject[Worker::workerCount] = Worker(id,name,deptID,basic,hoursWorked,hourlyRate);
        Worker::workerCount = Worker::workerCount + 1;
    }
    break;

    case 3:

        cout<<"\n---- Salary of All Manager ----"<<endl;

        for(int i=0;i<Manager::managerCount;i++)
        {
            cout<<"Salary of Manager "<<mgrObject->getName()<<" = "<<mgrObject->computeNetSalary()<<endl;
        }


        cout<<"\n---- Salary of All Worker ----"<<endl;

        for(int i=0;i<Worker::workerCount;i++)
        {
            cout<<"Salary of Manager "<<wrkObject->getName()<<" = "<<wrkObject->computeNetSalary()<<endl;
        }
        break;



    case 4:
    break;

        default:
            cout<<"Invalid Choice!...";
            break;
    }


    }while(choice!=4);


    





    // do{

    //     switch (choice)
    //     {
    //     case 1:
    //         int managers;
    //         cout<<"\n --- Hire manager!... ---"<<endl;
    //         cout<<"How many manager you want to"
    //         Employee *mObject = new Employee[manager];


    //         break;
        
    //     default:
    //         break;
    //     }
    // }while(choice!=4);
}