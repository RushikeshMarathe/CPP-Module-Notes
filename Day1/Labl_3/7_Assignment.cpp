#include<iostream>
using namespace std;

class Student{
    private:
        int rollno;
        double mark1,mark2,mark3;

    public:
    void accept()
    {
        cout<<"\nEnter Student Roll No: ";
        cin>>rollno;
        cout<<"\nEnter Student Subject1 Marks: ";
        cin>>mark1;
        cout<<"\nEnter Student Subject2 Marks: ";
        cin>>mark2;
        cout<<"\nEnter Student Subject3 Marks: ";
        cin>>mark3;
        
    }

    void display()
    {
        double sum =0;
        double percentage;
        cout<<"\nRoll No : "<<rollno;
        cout<<"\nMark1 : "<<mark1;
        cout<<"\nMark2 : "<<mark2;
        cout<<"\nMark3 : "<<mark3;

        sum=mark1+mark2+mark3;
        cout<<"\nTotal of Marks : "<<sum;
        percentage = (sum/300)*100;
        cout<<"\nPercentage : "<<percentage;
        if(percentage>=80 && percentage<=100)
        {
            cout<<"\nGrade : A";
        }else if(percentage>=60 && percentage<80)
        {
            cout<<"\nGrade : B";
        }else{
            cout<<"\nGrade : C";
        }
    }



};


int main(){
    Student s1;
    s1.accept();
    s1.display();
}