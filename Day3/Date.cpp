#include<iostream>
using namespace std;

class Date{

    private:
        int dd,mm;
        long yy;

    public:
        //getter for day
        int getDay(){
            return dd;
        }

        //getter for month
        int getMonth(){
            return mm;
        }

        //getter for year
        int getYear(){
            return yy;
        }

        //setter for day
        void setDay(int dd)
        {
            this->dd=dd;
        }

        //setter for month
        void setMonth(int mm)
        {
            this->mm= mm;
        }

        //setter for year
        void setYear(long yy)
        {
            this->yy=yy;
        }


        void display()
        {
            cout<<"\n -> Date = "<<dd<<"-"<<mm<<"-"<<yy<<endl;
        }


        Date(){
            cout<<"\n ---- Default Constructor ----";
            dd = 01;
            mm = 06;
            yy = 1995;
        }

        Date(int dd,int mm, long yy)
        {
            cout<<"\n ---- Parameterized Constructor ----";
            this->dd = dd;
            this->mm = mm;
            this->yy = yy;
        }

};


int main()
{
    Date dObject(23,11,2000);

    //calling display method
    dObject.display();

    //calling Setter functions

    dObject.setDay(11);
    dObject.setMonth(05);
    dObject.setYear(2013);


    //calling getter functions
    cout<<"\n ->Calling getter function"<<endl;
    cout<<"Day = "<<dObject.getDay()<<endl;

    cout<<"Month = "<<dObject.getDay()<<endl;

    cout<<"Year = "<<dObject.getDay()<<endl;

    return 0;

}