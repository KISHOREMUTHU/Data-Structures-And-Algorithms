//# Data-Structures-And-Algorithms
//Here I will post my regular DSA problems

//Queue implementation using pointers /linked list

//Credits to Shruthi ECE - A

#include<iostream>
using namespace std;

struct node
{
	int a;
  struct node *next;
};

class queue
{   public:
	node *front;
	node *rear;

	queue()  //constructor
	{
	   front = NULL;  //as it will initially be empty
	   rear = NULL;	//as it will initially be empty
	}

	void enqueue(int);
	void dequeue();
	void display();
	
};

void queue::enqueue(int n)

   node *temp=new node; // creating a node to store the input 
   temp->a=n;  // gets input of data
   temp->next=NULL; // assigns next node to null
   if(front==NULL && rear == NULL) // similar to front=rear=-1 conditon
   {
   	front=rear=temp;  // assigning to temp, as there will be only one element at this stage
   }
   else
   {
   	rear->next=temp;  //the next of rear pointer points to the pointer of the new element 
   	rear=temp; //and this will be the new rear as rear pointer should always point to the last data
   }
   
}

void queue::dequeue()
{
	if(front==NULL && rear==NULL) //if it is empty
	cout<<"\nUnderflow!";
	else
	{
		node *temp=front;  // temp is made to point to the current value in front
		cout<<front->a<<"is deleted!\n";  // element is printed
		front=front->next;  //front is incrmented as the previous element is gonna be deleted
		delete temp;  //temp is deleted
	}

}

void queue::display()
{
	if(front==NULL && rear==NULL) // if it is empty
	cout<<"\nUnderflow!"; 
     else
	{  cout<<"\nThe elements are....\n";
	   for(node *temp=front;temp!=NULL;temp=temp->next) //traversing from beginning(front)till end( not equal to null) which is getting incremented one by one(temp=temp->next)
	   {
	   	  cout<<temp->a<<"\t";  //executing the elements one by one
	   }	
	}
}

int main()
{
	queue q1;
	int choice,n;
	do
	{
		cout<<"\n\nEnter choice:";
		cout<<"\n1.Insert";
		cout<<"\n2.Remove";
		cout<<"\n3.Display";
		cout<<"\n4.Exit\n";
		cin>>choice;
		switch(choice)
		{
			case 1: cout<<"\nEnter value:";
			        cin>>n;
			        q1.enqueue(n);
			        break;
			case 2: q1.dequeue();
			        break;
			case 3: q1.display();
			        break;
		}
		
	}while(choice!=4);

	return 0;
}
