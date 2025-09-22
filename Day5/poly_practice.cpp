#include<iostream>
using namespace std;


class ParentClass{
    protected:
        int parentData;

    public:
        ParentClass(){
            cout<<"\n =>Parent class Default Constructor . "<<endl;
        }
        
        ParentClass(int a){
            cout<<"Parent class Default Constructor . "<<endl;
            this->parentData = a;
        }

        void show(){
            cout<<" =>Display Method from Parent class."<<endl;
        }
};


class child1:public ParentClass{
    private:
        int childData;

    public:
        child1(){
            cout<<"\n\n\n*child1 class Default Constructor."<<endl;
        }

        child1(int a,int b):ParentClass(a){
            this->childData = b;
            cout<<"child1 class Parameterized Constructor."<<endl;
        }

        void show(){
            cout<<"*child1 class show method."<<endl;
        }
};

class child2:public ParentClass{
    private:
        int childData;

    public:
        child2(){
            cout<<"\n\n\n+child1 class Default Constructor."<<endl;
        }

        child2(int a,int b):ParentClass(a){
            this->childData = b;
            cout<<"child1 class Parameterized Constructor."<<endl;
        }

        void show(){
            cout<<"+child1 class show method."<<endl;
        }
};

int main(){
    // ParentClass p;
    ParentClass parent[2];
    child1 c1;
    child2 c2;
    // parent[0] = p;
    parent[0] = c1;
    parent[1] = c2;

    parent[0].show();
    parent[1].show();
    // parent[2].show();

    return 0;
}