#include<iostream>
using namespace std;

class Book {
    private:
        string bname,author;
        int id,price;

    public:
        //Getter function for all data members
        string getBname()
        {
            return this->bname;
        }

        int getId()
        {
            return this->id;
        }

        string getAuthor()
        {
            return this->author;
        }

        int getPrice()
        {
            return this->price;
        }


        //Setter function for all data member

        void setBname(string bname)
        {
            this->bname = bname;
        }

        void setId(int id)
        {
            this->id=id;
        }

        void setAuthor(string author)
        {
            this->author = author;
        }

        void setPrice(int price)
        {
            this->price = price;
        }


        void Display(){
            cout<<"\n---- Displaying Data ----"<<endl;
            cout<<"Book Name : "<<this->bname<<endl;
            cout<<"Book Id : "<<this->id<<endl;
            cout<<"Book Author : "<<this->author<<endl;
            cout<<"Book Price : "<<this->price<<endl;
        }

        Book(){
            cout<<" ---- Default Constructor ----";
            bname = "Vision";
            id = 101;
            author = "James Thomson";
            price = 350;
        }

        Book(string bname,int id,string author,int price)
        {
            cout<<" ---- Parameterized Constructor ----";
            this->bname = bname;
            this->id = id;
            this->author=author;
            this->price=price;
        }


};

int main()
{
    Book bObject("C Progamming",102,"Dennis",500);

    bObject.Display();

    //calling setter function
    bObject.setBname("CPP Programming");
    bObject.setId(104);
    bObject.setAuthor("JOhn");
    bObject.setPrice(400);

    //callig getter function
    cout<<"\n Book Name : "<<bObject.getBname()<<endl;
    cout<<"\n Book Id : "<<bObject.getId()<<endl;
    cout<<"\n Book Author : "<<bObject.getAuthor()<<endl;
    cout<<"\n Book Price : "<<bObject.getPrice()<<endl;

    return 0;

}