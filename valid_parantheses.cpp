# Data-Structures-And-Algorithms
Here I will post my regular DSA problems

#include<iostream>
using namespace std;

// Valid parantheses program 
// Stack method 

int top = -1;
char s[20];        // Declaration of a stack array


// Function to push element into the stack 

void push ( char x ) {
    
    if(top<=19){
    
      top ++;
      s[top] = x;
    
               }
            
    else {
    
       cout << "Full" << endl;
    
         }
    
}
 
// Function to pop the topmost stack element

void pop () {

       if ( top == -1 ) {
    
        cout << "Empty" << endl ;
         
                        }
            
       else {
        
           --top;
    
            }

}

int main () {

      char a[20];
      cout << "Enter the parantheses : " ;
      cin >> a ;
      
     // for loop for checking the parantheses are valid (or) balanced 
    
      for( int i = 0 ; a[i] != '\0' ; i ++ ){
    
        if( a[i] == '{' ||  a[i] == '(' || a[i] == '[' ) {
        
             push ( a[i] );
        
                                                         }
        
        if ( a[i] == '}' ) {
        
             if ( s[top] == '{' ) {
             
              pop ();
            
                                  }
            
             else {
            
             cout << "False" << endl;
             exit (0);
                    
                  }
        
                           }
        
    else  if ( a[i] == ')' ) {
        
             if ( s[top] == '(' ) {
             
              pop ();
            
                                  }  
            
             else {
            
             cout << "False" << endl;
             exit (0);
                    
                  }      
        
                             }
        
    else  if ( a[i] == ']' ) {
        
             if ( s[top] == '[' ) {
             
              pop ();
            
                                  } 
            
             else {
            
             cout << "False" << endl;
             exit (0);
                    
                  }      
        
                             }
    
    
    }
    
    if ( top == -1 ) {
    
       cout << "True" << endl ;
    
                     }
            
    else {
    
       cout << "False" << endl ;
    
         }
    
    return 0;
    
}
