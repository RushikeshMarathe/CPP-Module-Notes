#include<iostream>
using namespace std;

class Bank{
    private:
        int acc_no;
        string cust_name;
        double balance;

    public:
        Bank(){

        }

        Bank(int acc_no,string cust_name,double balance)
        {
            this->acc_no = acc_no;
            this->cust_name = cust_name;
            this->balance = balance;
        }

        void withdraw(double amt)
        
        {
            this->balance = this->balance - amt;
            cout<<amt<<" Successfully Withdraw from "<<this->cust_name<<" account"<<endl;
            cout<<"Remaining Balance = "<<balance<<endl;
        }

        void deposit(double amt)
        {
             this->balance = this->balance + amt;
            cout<<amt<<" Successfully Deposited to "<<this->cust_name<<" account"<<endl;
            cout<<"Remaining Balance = "<<balance<<endl;
        }
};


int main()
{
    Bank bObject(111,"rushi",50000);

    bObject.withdraw(10000);
    bObject.deposit(2000);

    return 0;
}