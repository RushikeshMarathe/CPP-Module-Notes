#include<iostream>
using namespace std;

template <class Q>
class queue{
    private:
        Q Array[5];
        int rear=0,front=0;
        int size = sizeof(Array) / sizeof(Array[0]);

    public:
        void enqueue(Q data){
            cout<<"Size of Queue : "<<size<<endl;
            if(rear != 5){
                cout<<"front : "<<front;
                Array[rear] = data;
             rear++;
            }else{
                cout<<"\n-> Queue is Full!.."<<endl;
                for(int i=front;i<rear;i++)
                {
                    cout<<Array[i]<<", ";
                }
            }
        }

        // void showQueue(){
        //     for(int i=front;i<rear;i++)
        //         {
        //             cout<<Array[i]<<", ";
        //         }
        // }

        Q dequeue(){
            if(front == 0 && rear == 0){
                cout<<"Queue is Empty!..."<<endl;
                
            }else{
                cout<<"Element remove from Queue = "<<this->Array[front];
                for(int i=front;i<rear;i++)
                {
                    this->Array[i] = this->Array[i+1];
                }
                rear--;
        }
        }

        void frontQueue(){
            cout<<"\nFront of Queue = "<<this->Array[front]<<endl;
        }

        void isEmpty(){
            if(front ==0 && rear ==0)
            {
                cout<<"\nQueue is Empty!"<<endl;
            }else{
                cout<<"\nQueue is not Empty!"<<endl;
            }
        }
};


int main(){
    queue<int> qObj;
    int ch;

    do{
            cout<<"\n1.enqueue\n2.dequeue\n3.front\n4.isEmpty\n0.Exit."<<endl;
            cout<<"Enter your choice : ";
            cin>>ch;

            switch (ch)
            {
            case 1:
                int value;
                cout<<"\nEnter data to enqueue : ";
                cin>>value;
                qObj.enqueue(value);
                break;

            case 2:
                qObj.dequeue();
                break;

            case 3:
                qObj.frontQueue();
                break;

            case 4:
                qObj.isEmpty();
                break;
            
            default:
                break;
            }

    }while(ch!=0);

    return 0;
}