# Data-Structures-And-Algorithms
Here I will post my regular DSA problems

#include<iostream>
using namespace std;

struct node {

    int data;
    struct node * next ;
    
};

class linked_list{

     struct node *head;
    
    public:
       
    linked_list(){
    
      head = NULL;
    
                 }

    void insertbeg(){

      struct node *temp;
      
      temp = new node;
      cin >> temp -> data;
  
      if( head == NULL ){
         
          head = temp;
        
                        }
            
     else {
    
         temp -> next = head;
         head = temp;
        
          }

}

   void traverse(){

       struct node * temp ;
       temp = head ;
       while ( temp != NULL ){
         
        cout << temp -> data << " ";
        temp = temp -> next ;
        
                            }
        
        cout << endl;

}

   void insertend(){

      struct node * temp1,*temp2;
    
      temp2 = new node ;
      cin >> temp2 -> data;
      temp2 -> next = NULL ;
    
      temp1 = head ;
     
      while( temp1 -> next != NULL ){
    
           temp1 = temp1 -> next ;
    
                                    }
     
      temp1 -> next = temp2;
      
}

     void insertmid () {
    
        struct node *temp ,*prev ,*curr;
        int i,pos;
        
        cout << "Enter position to insert :";
        cin >> pos;
        
        if( pos == 1 ){
        
           insertbeg();
           return;
        
                      } 
       
        for( i = 1 , prev = head , curr = head ; i<pos && curr -> next != NULL ; i++ , prev = curr , curr = curr -> next );
        
        if( i == pos ){
        
           temp = new node ;
           cin >> temp -> data ;
           temp -> next = curr ;
           prev -> next = temp ;
          
        
        }
        
        else{
        
          cout << "Invalid" << endl;
        
            }
  
    
    }

     void deletebeg(){
    
       struct node *temp;
    
       if( head == NULL ){
          
        cout << "Empty" << endl;
    
                         }
            
       else{
    
         temp = head ;
         cout << temp -> data << " is deleted " << endl;
         head = temp -> next;
         delete temp;
    
          }
    
    }
    
    void deleteend() {
    
       if( head == NULL ){
          
        cout << "Empty" << endl;
    
                         }
            
       else{
          
          struct node *prev,*curr;
        
          curr = prev = head;
         
          while( curr -> next != NULL ){
        
              prev = curr ;
              curr = curr -> next ;
        
                                       }
         cout << curr -> data << " is deleted" << endl;
        
         if( prev != curr ) {
        
            prev -> next = NULL ;
            delete curr ;
            
                            }
            
         else {
        
             head = NULL ;
        
              }   
         
           }
    
    
    }
    
        void deletemid(){
        
        struct node * temp , *curr , *prev;
        
        if( head == NULL ){
        
          cout << "Empty " << endl ;
        
                          }
        
        else {
        
        cout << "Enter position to delete : ";
        cin >> pos ;
        
        if( pos == 1 ){
        
             deletebeg();
             return ;
            
                      }
        
        for( i = 1 , prev = head , curr = head ; i != pos && curr -> next != NULL ; i++ , prev = curr , curr = curr -> next );
        
        {
        
        if( pos == i ){
        
        cout << curr -> data << " is deleted" << endl;
        prev -> next = curr -> next;
        delete curr;
        
                     }
            
        else{
        
        cout << "Invalid" << endl;
        
            }
            
        }      
        
        }
        
                         }

};


int main (){

      linked_list l;
      int ch,n;
        do
        {
        
        cout<<"Enter your choice: ";
        cin>>ch;
        switch(ch)
        {
        case 1:
        l.insertbeg();
        break;
        case 2:
        l.insertend();
        break;
        case 3:
        l.insertmid();
        break;
        case 4:
        l.deletebeg();
        break;
        case 5:
        l.deleteend();
        break;
        case 6:
        l.deletemid();
        break;
        case 7:
        l.traverse();
        break;
        default:
        cout<<"invalid choice"<<endl;
        break;
        }
       cout<<"Continue? :";
        cin>>n;
        }while(n==1);

      return 0;



}
