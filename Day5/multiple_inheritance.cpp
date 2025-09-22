#include<iostream>
using namespace std;

class parent1{
    private:
        int a;

    public:
        parent1(){
            cout<<"\n parent 1 default constructor"<<endl;
        }

        parent1(int a){
        cout<<"\n parent 1 para constructor"<<endl;
            this->a;
        }

        void display(){
            cout<<"Parent 1 display"<<endl;
        }

        void add(){
            cout<<"Add from parent 1"<<endl;
        }

};

class parent2{
    private:
        int b;

    public:
        parent2(){
            cout<<"\n parent 2 default constructor"<<endl;
        }

        parent2(int b){
            cout<<"\n parent 2 para constructor"<<endl;
\
            this->b = b;
        }

        void display(){
            cout<<"Parent 2 display"<<endl;
        }

        void add(){
            cout<<"Add from parent 2"<<endl;
        }

};


class child:public parent1,public parent2{
    private:
        int c;
        
    public:
    child(){
        cout<<"Child default constructor."<<endl;
    }

    child(int c){
        cout<<"Child parameterized constructor."<<endl;
    }

    void add(){
        cout<<"Add from child."<<endl;
    }
    
};

int main(){
    child c;
    c.parent1::add();
    return 0;
}