//# Data-Structures-And-Algorithms
//Here I will post my regular DSA problems

//Queue implementation using array

#include<iostream>
#include<conio.h>
#include<string.h>
#define n 5
using namespace std;

class queue{
   
    int q[n];
     int front;
     int rear;

    public:

    queue()
       {
       front=-1; //Setting front and rear value to -1
       rear=-1;
            }

    void enqueue () //Inserting value from rear
                     {
              int x;
     if(rear==n-1){
       cout<<"Queue is Full"<<endl;
                       }

   else  if(front==-1&&rear==-1)
                {
      cout<<"Enter element: ";
       cin>>x;
        front=rear=0;
        q[rear]=x;
           }

      else{
     cout<<"Enter element: ";
       cin>>x;
           rear++;
         q[rear]=x;
        }    
        
    }

  void dequeue () //Removing element from the front
           {

   if(front==-1&&rear==-1){
    cout<<"Queue is empty"<<endl;
                      }

    else if(front==rear){
 cout<<"Dequeued Element: "<<q[front]<<endl;
      front=rear=-1;
                     }

       else{
            cout<<"Dequeued Element: "<<q[front]<<endl;
             front++;
           }
            
     }

   void display () //Displaying the elements in the queue from front to rear
                 {
      if(front==-1&&rear==-1){
       cout<<"Queue is empty"<<endl;
              }   

      else{
         cout<<"Elements in Queue are: ";
         for(int i=front;i<=rear;i++){
          cout<<q[i]<<" ";
                }
        cout<<endl;

        } 
 
            }

         void peek() //Displaying the front element without removing it
              {
         if(front==-1&&rear==-1){
           cout<<"Queue is empty"<<endl;
        }

          else{
          cout<<"Top element : "<<q[front]<<endl;  
            }

            }

         void is_empty() //Check whether the queue is empty or not
         {

     if(front==-1&&rear==-1){
       cout<<"Empty"<<endl;
            }

 else{
     cout<<"Not empty"<<endl;
     }

}
      void is_full() //Check whether the queue is full or not
         {
       
       if(rear==n-1){
        cout<<"Full"<<endl;
           }
       
        else{
          cout<<"Not full"<<endl;
            } 
            
        }

    };
    
    int main (){
       
    class queue que;
      int e,op;
      char a;
      do{
           cout<<"Enter option:";
            cin>>op;
           switch(op){
            case 1:
              
                que.enqueue();
                 break;
             case 2:
                  que.dequeue();
                  break;
             case 3:
                  que.display();
                  break;
             case 4:
                que.peek();
                break;
             case 5:
               que.is_empty();
               break;
             case 6:
              que.is_full();
              break; 
              default:
                  cout<<"Invalid choice"<<endl;
                  break;
                        }
              cout<<"Continue? :";
             cin>>a;
            } while (a=='y');
            
            return 0;
      
        
        
    }
    
