// # Data-Structures-And-Algorithms
// Here I will post my regular DSA problems

// Postfix Expression Evaluation Program

#include<iostream.h>
#include<conio.h>
#define SIZE 50
#include <ctype.h>

int s[SIZE]; // Global variables
int top=-1; 

int push( int elem )
{
 s[ ++top ] = elem;
 return( s [top] );
}
 int pop()
{
 return( s [top--] );
}

int main()
{
 char pofx[50],ch;
 int i=0,op1,op2;
 
 cout << "\nEnter the postfix expression :  ";
 cin >> pofx;
 while( ( ch = pofx [i++] ) != '\0' )
 {
    if( isdigit ( ch ) )
          push( ch - '0' );
    else
   {
   op2 = pop();
   op1 = pop();

   // Using switch case to evaluate the expression 
     
   switch( ch )
   {
   case '+' : 
            push( op1 + op2 );
            break;
     
   case '-' :
            push( op1 - op2 );
            break;
     
   case '*' :
            push( op1 * op2 );
            break;
     
   case '/' :
            push( op1 / op2 );
            break;
   }
   
   }
 }
 
 cout << endl;
 cout << "Result after Evaluation: " << s[top];
 
}


