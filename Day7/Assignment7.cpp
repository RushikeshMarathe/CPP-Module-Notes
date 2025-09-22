#include<iostream>
using namespace std;

namespace CDAC{
    class Student{
        private:
            int rollno;
            string name;

        public:
            Student(int rollno,string name)
            {
                cout<<"\nCDAC namespace Student class constructor"<<endl;
                this->rollno = rollno;
                this->name = name;
            }

            void display(){
                cout<<"\nCDAC Namespace."<<endl;
                cout<<"\nStudent Roll No : "<<rollno<<endl;
                cout<<"Student Name : "<<name<<endl;
            }
    };
}


namespace IACSD
{
    class Student{
         private:
            int rollno;
            string name;

        public:
            Student(int rollno,string name)
            {
                cout<<"\nIACSD namespace Student class constructor"<<endl;
                this->rollno = rollno;
                this->name = name;
            }

            void display(){
                cout<<"\nIACSD Namespace."<<endl;
                cout<<"\nStudent Roll No : "<<rollno<<endl;
                cout<<"Student Name : "<<name<<endl;
            }
            
    };
}

int main(){
    IACSD::Student s1(101,"Rushikesh");
    CDAC::Student s2(102,"akshay");

    s1.display();
    s2.display();

    return 0;
}