#include<iostream>
using namespace std;
class queue{
    private:
        int front,rear;
    public:
        int max;
        int arr[];
        queue(){
            front=-1;
            rear=-1;
        }
        void insert(){
            int val;
            if(rear==max-1){
                cout<<"\noverflow\n";
            }
            else{
                if(front==-1){
                    front=0;
                }
                cout<<"Insert an element:";
                cin>>val;
                rear++;
                arr[rear]=val;
            }
        }
        int Delete(){
            int data;
            if(front==-1||front==rear){
                cout<<"underflow\n";
                return 0;
            }
            else{
                data=arr[front];
                arr[front]=0;
                front ++;
                return data;
            }
        }
        void Display(){
            if(front==-1)
                cout<<"queue is empty";
            else{
                cout<<"Queue elements are:";
                for(int i=front;i<=rear;i++){
                    cout<<arr[i]<<" ";
                }
            }
        }
}q;
int main(){
    cout<<"enter the max size:";
    cin>>q.max;
    int ch;
    while(ch!=4){  
        cout<<"1. Insert element to queue\n";
        cout<<"2. delete element from queue\n";
        cout<<"3. display element of queue\n";
        cout<<"4. exit\n";
        cout<<"Enter your choice:";
        cin>>ch;
        switch(ch){
            case 1:q.insert();
            break;
            case 2:
                {int a=q.Delete();
                   cout<<a;
            break;}
            case 3:q.Display();
            break;
            case 4:cout<<"Exit";
            break;
            default:cout<<"invalid";
        }
        return 0;
    }
}