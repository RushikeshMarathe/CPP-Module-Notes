#include<iostream>
#include<map>
using namespace std;

/*
4:Create an application using map for storing key and value
   key:int
   value:Account type
   Create Account class with actid ,name,balance
   Create Menu driven app
   1:Add Account
   2:Display all
   3:Search account by actid;
   4:Remove all*/


class Account{
    private:
        int actid;
        string name;
        double balance;

    public:
        Account(int actid,string name,double balance){
            this->actid = actid;
            this->name = name;
            this->balance = balance;
        }

        void addAccount(int actid,string name,double balance){
            this->actid = actid;
            this->name = name;
            this->balance = balance;
        }

        void display(){
            cout<<"--- Account Details ---"<<endl;
            cout<<"Account Id : "<<this->actid<<endl;
            cout<<"User Name  : "<<this->name<<endl;
            cout<<"Account Balance : "<<this->balance<<endl;
        }
};

int main(){
    map<int,Account> accountMap;
    Account *aObject;
    int ch,actid;
    string name;
    double balance;
    
    do{
        cout<<"\n1:Add Account./n2:Display all./n3:Search account by actid./n4:Remove all/n5.Exit"<<endl;
        cout<<"\nEnter your choice : ";
        cin>>ch;

        switch (ch)
        {
            case 1:
            cout<<"\nEnter Account id : ";
            cin>>actid;
            cout<<"\nEnter User Name : ";
            cin>>name;
            cout<<"\nEnter Balance in account : ";
            cin>>balance;
            aObject = new Account(actid,name,balance);


            accountMap.insert({actid,*aObject});
            cout<<"\nAccount Created Successfully!..."<<endl;
            break;

        case 2:
            cout<<"--- Account Details of Bank ---"<<endl;
            for(auto &id : accountMap){
                cout<<id.first;  
                id.second.display();              
            }
            break;

        case 3:
            cout<<"Enter a Account id to search = ";
            cin>>actid;

            for(auto &id:accountMap)
            {
                if(id.first == actid){
                    cout<<"\n--- Account Found ---"<<endl;
                    id.second.display();
                }
            }
            break;

        case 4:
            accountMap.clear();
            cout<<"\nAccounts Deleted Successfully!..."<<endl;
            break;

        case 0:
            break;
        
        default:
            cout<<"Invalid choice!...";
            break;
        }

        
    }while(ch!=0);

    return 0;
}