#include<iostream>

using namespace std ;

inline double areaSqure(double a){
    return a * a;

}

inline double areaRectangle(double length,double breadth)
{
    return length * breadth;
}

inline double areaCircle(double r)
{
    return 3.14 *r*r;
}

int main(){
    double side,length,width,radius ;
    cout<<"Enter the Square side  :"<<endl ;
    cin>>side;

    cout<<"Enter the length and width of rectangle  :"<<endl ;
    cin>>length>>width ;
    cout<<"Area of Rectangle : "<<areaRectangle(length,width)<<endl ;

    cout<<"Enter the Circle radius  :"<<endl ;
    cin >> radius ;
    cout<<"Area of Circle : "<<areaCircle(radius)<<endl ;

  



    return 0;
}
