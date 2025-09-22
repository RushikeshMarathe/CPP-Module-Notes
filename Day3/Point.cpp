#include<iostream> 

using namespace std;

class Point{
    private :
    int x;
    int y ;

    public :
    Point(){
        cout<<"\t \t \t This is Default constructor "<<endl ;
    }
    
    Point(int x , int y){
        cout<<"\t \t \t Parametarized construtor called "<<endl ;
        this->x=x;
        this->y=y;
    }
    //getter and setter method 

    int getPointx(){
        return x;
    }

    void setPointx(int x){
        this->x=x;
    }
    //
int getPointY(){
        return y;
    }

    void setPointY(int y){
        this->y=y;
    }

    void display(){
        cout<<"\t \t \t  ---------------------display details ----------------------"<<endl;
        cout<<"\t \t \t this x value "<< x <<endl ;
        cout<<"\t \t \t this Y value "<<y << endl ;
    }
};
int main(){

    Point p1;
    p1.display();
    Point P2(4 , 3 );
    P2.display();
    P2.setPointx(10);
    P2.setPointY(100);
    cout<<"\t \t \t the value of x is : "<<P2.getPointx()<<endl;
    cout<<"\t \t \t the value of y is : "<<P2.getPointY()<<endl;
   

    return 0;
}
