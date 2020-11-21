# Data-Structures-And-Algorithms

Here I will post my regular DSA problems


#include <iostream>

using namespace std;

// Stack implementation using pointers

struct node { // struct node for pointer implementation

    int data ;

    struct node * next;

           };

class stack {

     

     struct node *top;

    

     public:

    

     stack(){

      top = NULL;  // Initialise top node with NULL

            }

        

    void push(  ) { // Push function for pushing element into a node 

    

    struct node * temp;

       temp = new node ;

       cin>>temp->data;

    

    if(top==NULL){

       top = temp;

                 }

            

    else{

      temp->next = top;

      top=temp;

    

    }

    

    }

    

   void pop(){ // Pop function for popping out the topmost node element 

      struct node * temp;

      temp=top;

    

    if(top==NULL){

       cout<<"Empty"<<endl;

                 }

     

    else {

      cout<<temp->data<<" is popped "<<endl;

      top=top->next;

      delete temp;

         }

       

    }

    

    void display (){ // Displaying all the elements of the stack 

    

     struct node * temp;

     temp=top;

    

    if(top==NULL){

     cout<<"Empty"<<endl;

                 }

            

    else{

    cout<<"Elements in the stack are :";

    while ( temp!=NULL){

        cout<<temp->data<<" ";

        temp=temp->next;

                       }

            

    cout<<endl;

    

    }

    

    }

};

int main(){

    class stack stk;

     int ele;

    int opt;

    char a;

    do{

       cout<<"Enter option: ";

        cin>>opt;

        switch(opt){

          case 1:

           cout<<"Enter the element:";

             

               stk.push();

               break;

        

          case 2:

               stk.pop();

              break;

        

          case 3:

               stk.display();

                break;

        

         default:

            cout<<"Invalid choice"<<endl;

             break;

             }

     

       cout<<"Continue ? : ";

       cin>>a;//y or n

       } while (a=='y');

        return 0;

       }
