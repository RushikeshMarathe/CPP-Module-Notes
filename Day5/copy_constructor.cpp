#include<iostream>
using namespace std;

/*
class Copy{
    private:
        int a,b;
        int* data;

    public:
        Copy(){
            a=10;
            b=20;
        }

        Copy(int a, int b)
        {
            data = new int(b);
            this->a = a;
            this->b = b;
        }

        void show(){
            cout<<this->a<<endl;
            cout<<*this->data<<endl;
        }

        
        ~Copy(){
            delete data;
        }
};


int main(){
    Copy c1(3,9);

    Copy c2 = c1;
    c1.~Copy();//data on heap deleted 
    c2.show(); //garbage data shown //dangling occurs here.
}
*/


class Copy{
    private:
        int a,b;
        int* data;

    public:
     

        Copy(int a)
        {
            data = new int(a);
            this->a = a;
        }

        Copy(const Copy &c){
            // this->a = c.a;//cant reassign because it is const
            this->data = new int(*c.data);
        }

        void show(){
            cout<<this->a<<endl;
            cout<<*this->data<<endl;
        }

        
        ~Copy(){
            delete data;
        }
};


int main(){
    Copy c1(3);

    Copy c2(c1);
    // c1.~Copy();//data on heap deleted 
    c2.show(); //garbage data shown //dangling occurs here.
    c1.show();
}