# Data-Structures-And-Algorithms


Here I will post my regular DSA problems

#include <iostream>

using namespace std;

#define max 5

// Circular Queue implementation

class cq{

   int c[max],rear ,front;

   public:

  cq(){

    rear = -1;

    front = -1;

    }

    

void enqueue (int x){

 if(rear == -1 && front == -1){

           rear=front=0;

           c[rear]=x;  

                              }

            

 else if((rear+1)%max==front){

       cout<<"Full"<<endl;

                             }

        

        else{

         rear = (rear+1)%max;

         c[rear]=x;

           }

}

    

void dequeue (){

 if(front ==1 && rear ==-1){

            cout<<"Empty"<<endl;

                           }

            

 else if (front ==rear ){

          cout<<c[front]<<" is deleted"<<endl;

          rear=front=-1;

                        }

            

 else {

     cout<<c[front]<<" is deleted"<<endl;

     front=(front+1)%max;

      }

     

}

    

void display(){

    if (front == -1) { 

       cout<<"\nQueue is Empty"<<endl;

       return; 

                     } 

cout<<"\nElements in Circular Queue are: "; 

     

    if (rear >= front){ 

    

      for (int i = front; i <= rear; i++) 

               cout << c[i] << " "; 

            

            cout<<endl;

                      } 

 

   else { 

     for (int i = front; i < max; i++)

               cout << c[i] << " "; 

            

            cout<<endl;

    for (int i = 0; i <= rear; i++) 

               cout<< c[i] << " "; 

            

            cout<<endl;

    } 

    

} 

    

    

};

int main (){

     

      cq c1;

      int e ;

      char a ;

    

    do{

        cout<<"Enter choice : ";

        cin>>e;

        switch(e){

        

        case 1:

          cout<<"Enter element to enqueue: ";

          cin>>e;

          c1.enqueue(e);

          break;

        case 2:

          c1.dequeue();

          break;

        case 3 :

           c1.display();

          break;

        default:

         cout<<"Invalid"<<endl;

         break;

        

        }

        cout<<"Continue ? : ";

        cin>>a;

    

    

    }while(a=='y');

    

}
