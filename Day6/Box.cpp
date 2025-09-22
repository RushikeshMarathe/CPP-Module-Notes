#include<iostream>
using namespace std;

template <class BoxType>
class Box{
    private:
    BoxType value;

    public:
    BoxType getValue()
    {
        return this->value ;
    }

    void setValue(BoxType& value)
    {
        this->value = value;
    }


};

int main(){
    string value;
    Box<string> boxObject;
    
    cout<<"\n Enter a color of box : ";
    cin>>value;

    boxObject.setValue(value);

    cout<<"\n Box Color = "<<boxObject.getValue();

    return 0;
}