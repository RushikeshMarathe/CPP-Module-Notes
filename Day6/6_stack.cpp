#include<iostream>
using namespace std;

template <class S>
class stack{
    private:
        S array[5];
        int top=0;
    public:

        stack(){

        }

        void push(S data){
            if(top == 4){
                cout<<"\nStack is Overflow!...";
            }else{
                top++;
                array[top] = data;
            }
        }


        S pop(){
            if(top == 0){
                cout<<"\nArray is Underflow!...";
            }else{
                cout<<"\n---- Element pop ----"<<"\n \tElement = "<<array[top]<<endl;
                top--;
            }
        }

          S peek(){
            if(top == 0){
                cout<<"Array is Underflow!..."<<endl;
            }else{
                return array[top];
            }
        }

        S isEmpty(){
             if(top==0){
                        cout<<"Stack is Empty!..."<<endl;

                    }else{
                        cout<<"Stack is not empty..."<<endl;
                    }
        }

        int getTop(){
            return this->top;
        }
        
};


int main(){
    int ch;
    // int data;
    string data;
    cout<<"----- Stack Functions -----"<<endl;
    // stack<int> sObj;
    stack<string> sObj;
    do{
            cout<<"\n1.push\n2.pop\n3.peek\n4.isEmpty\n5.Exit."<<endl;
            cout<<"Enter your choice : ";
            cin>>ch;

            switch(ch){
                case 1:
                    cout<<"Enter data to push : ";
                    cin>>data;
                    sObj.push(data);
                    break;

                case 2:
                    cout<<"\n--- Popping Data ---"<<endl;
                    sObj.pop();
                    break;

                case 3:
                    cout<<"\nPeek = "<<sObj.peek()<<endl;
                    break;

                case 4:
                  sObj.isEmpty();
                    break;

                case 5:
                    break;

                default:
                    cout<<"\nInvalid Choice..."<<endl;
                    break;
                }


    }while(ch!=5);
    return 0;
}