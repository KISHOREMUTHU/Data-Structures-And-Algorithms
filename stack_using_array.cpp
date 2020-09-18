//# Data-Structures-And-Algorithms
//Here I will post my regular DSA problems

// Stack implementation  using array

#include<iostream>
#include<conio.h>
#include<string.h>
#define n 5
using namespace std;

class stack{

     int s[n];
     int top;
     int x;
    
  public:

  stack()
     {
   top=-1; //Assigning initial top value to be -1
     }
    
 void push() //Pushing value into the stack
          {
       int x;
      
   if(top==n-1){
         cout<<"Stack Overflow"<<endl;
                }
            
     else{
        cout<<"Enter element: ";
         cin>>x;
         s[++top]=x;
         } 
        
        }
        
 void pop() //Popping out the element out of stack
      {

     if(top==-1){
      cout<<"Stack is Empty"<<endl;
              }
            
     else{
       cout<<"Popped Element: "<<s[top]<<endl;
       top--;
         }
        
    }
  void display () //displaying the elements inside the stack
         {
       
      if(top==-1){
        cout<<"Stack is Empty"<<endl;
              }
            
       else{  
      cout<<"Elements in stack are: ";
       for(int i=0;i<=top;i++)
              {
        cout<<s[i]<<" ";
              }
            
            cout<<endl;
        }
        
        }
        
    void peek() //Displaying the topmost element
            {
       
       if(top==-1){
        cout<<"Stack is Empty"<<endl;
                 }
            
        else{
          cout<<"Top element is: "<<s[top]<<endl;
           }
        
         }
        
   void is_empty() //Check whether stack is empty or not
         {

        if(top==-1){
        cout<<"True"<<endl;
                 }
           
       else{
           cout<<"False"<<endl;
           }
        
        }
        
  void is_full() //Check whether stack is full or not
      
          {

        if(top==(n-1)){
         cout<<"True"<<endl;
                }
            
          else{
          cout<<"False"<<endl;
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
        
        switch(opt)
             {
            
          case 1:
               stk.push();
               break;
          case 2:
               stk.pop();
              break;
          case 3:
               stk.display();
                break;
          case 4:
                stk.peek();
                 break;
          case 5:
               stk.is_full();
                break;
          case 6:
               stk.is_empty();
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
