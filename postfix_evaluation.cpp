# Data-Structures-And-Algorithms
Here I will post my regular DSA problems

// Postfix Expression Evaluation Program

#include<iostream.h>
#include<conio.h>
#define SIZE 50
#include <ctype.h>
int s[SIZE];
int top=-1;

int push(int elem)
{
 s[++top]=elem;
 return(s[top]);
}
 int pop()
{
 return(s[top--]);
}
void main()
{
 char pofx[50],ch;
 int i=0,op1,op2;
 clrscr();
 cout<<"\nRead the Postfix Expression ? ";
 cin>>pofx;
 while( (ch=pofx[i++]) != '\0')
 {
    if(isdigit(ch))
       push(ch-'0');
  else
  {
   op2=pop();
   op1=pop();
   switch(ch)
   {
   case '+':push(op1+op2);break;
   case '-':push(op1-op2);break;
   case '*':push(op1*op2);break;
   case '/':push(op1/op2);break;
   } } }
 cout<<"\n Given Postfix Expn:n"<<pofx;
 cout<<"\n Result after Evaluation: \n"<<s[top];
 getch();
}


