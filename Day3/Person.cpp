#include<iostream>
using namespace std;

class Person{
    private:
        string name,city;
        int age;
    
    public:
        string getName()
        {
            return name;
        }

        string getcity()
        {
            return city;
        }

        int getAge()
        {
            return age;
        }

        void setName(string name)
        {
            this->name = name;
            // cout<<"\n Enter Name of Person : ";
            // cin>>name;
        }

        void setCity(string city)
        {
            this->city=city;
            // cout<<"\n Enter Name of City : ";
            // cin>>city;
        }

        void setAge(int age)
        {
            this->age = age;
            // cout<<"\n Enter Age of Person : ";
            // cin>>age;
        }

        void display()
        {
            cout<<"\n----- Details of Person -----"<<endl;
            cout<<"Person's Name : "<<name<<endl;

            cout<<"Person's City : "<<city<<endl;

            cout<<"Person's Age : "<<age<<endl;

        }


        Person()
        {
            cout<<"\n ---- Default Constructor called ----";
            name = "abc";
            city = "pune";
            age = 18;
        }

        Person(string name,string city,int age)
        {
            cout<<"\n ---- Parameterized Constructor called ----";
            this->name=name;
            this->city=city;
            this->age=age;
        }
};


int main()
{
    Person pObject("Rushikesh","Pune",24);

    //Display object
    pObject.display();


    //calling setName function
    pObject.setName("Akshay");

    //calling setCity function
    pObject.setCity("Beed");

    //calling setAge function
    pObject.setAge(24);




    //calling getName function
    cout<<"Name of Person using getName: "<<pObject.getName()<<endl;

    //calling getName function
    cout<<"City of Person using getName: "<<pObject.getcity()<<endl;

    //calling getName function
    cout<<"Age of Person using getName: "<<pObject.getAge()<<endl;



    

}