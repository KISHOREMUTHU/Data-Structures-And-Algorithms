# Data-Structures-And-Algorithms
Here I will post my regular DSA problems

// Program to convert infix expression to postfix expression

#include<iostream.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>
char s[20];
int top=-1;

int priority(char c)
{
    if(c=='(')
        return(0);
    else if((c=='+')||(c=='-'))
        return(1);
    else if((c=='*')||(c=='/'))
        return(2);
return 0;
}

void pop()
{
    if(top==-1)
        cout<<"underflow";
    else
    {
        if(top>=0)
        {
            cout<<s[top];
            top--;
        }
    }
}

void push(char d)
{
    if(top==20)
        cout<<"overflow";
    else
    {
        if(top==-1)
            s[++top]=d;
        else if(d=='(')
            s[++top]=d;
        else
        {
            while(priority(s[top])>=priority(d))
                pop();
            s[++top]=d;
        }
    }
}

int main()
{
    int i,n;
    char a[30];
    cout<<"Enter the expression";
    cin>>a;
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        if(isalnum(a[i]))
            cout<<a[i];
        else if(a[i]=='(')
            push(a[i]);
        else if(a[i]==')')
        {
            while(s[top]!='(')
                pop();
            top--;
        }
        else
            push(a[i]);
    }
    while(top>=0)
        pop();
        return 0;
    
}

