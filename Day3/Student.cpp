#include<iostream>
using namespace std;

class Student {
    private:
        int rollNo;
        int marks1,marks2,marks3;
        double percentage,total;

    public:
        void acceptInfo(){
            cout<<"\nEnter Roll No : ";
            cin>>this->rollNo;

            cout<<"----- Marks Out of 100 -----";
            cout<<"\nEnter Marks1 : ";
            cin>>this->marks1;

            cout<<"Enter Marks2 : ";
            cin>>this->marks2;
            
            cout<<"Enter Marks3 : ";
            cin>>this->marks3;
        }

        void display(){
            cout<<"\n Roll No : "<<rollNo<<endl;

            cout<<"Marks 1 : "<<marks1<<endl;

            cout<<"Marks 2 : "<<marks2<<endl;

            cout<<"Marks 3 : "<<marks3<<endl;

        }

        void displayTotal()
        {
            total = marks1+marks2+marks3;
            cout<<"\n ->Total of Marks : "<<total<<endl;
        }

          void displayPercentage()
        {
            percentage = (total)/300 * 100;
            cout<<"\n ->Percentage of Marks : "<<percentage<<endl;
        }

        void displayGrade()
        {
           if(percentage<=100 && percentage >80)
           {
            cout<<"\n ->Grade of Student = A"<<endl;
           }else 
           if(percentage<=80 && percentage >=70)
           {
                cout<<"\n ->Grade of Student = B"<<endl;
           }else 
           {
                cout<<"\n ->Grade of Student = C"<<endl;
           }
        }
};

int main(){
    Student s1;
    s1.acceptInfo();
    s1.display();

    s1.displayTotal();

    s1.displayPercentage();

    s1.displayGrade();

    return 0;
}