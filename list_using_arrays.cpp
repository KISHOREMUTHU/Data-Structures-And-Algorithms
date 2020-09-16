//# Data-Structures-And-Algorithms
//Here I will post my regular DSA problems

// List implementation using arrays



#include<iostream>
using namespace std;


class arr{
   public:
     int a[5];
     int last;
     int i;
    
 arr(){

      last=0;
   
      } 
void insertbegin(){

  int val;
cout<<"Enter element to insert begin: ";
  cin>>val;
  last++;
  for(i=last;i>0;i--){
        
          a[i]=a[i-1];
          
              }
         a[0]=val;   
       
          }
        
 void insertend(){

        int i, val;
cout<<"Enter element to insert at end: ";
        cin>>val;
        last++;
       a[last-1]=val;
    
        }
        
void insertmid(){

  int i,val,pos;
 cout<<"Enter position to insert: ";
   cin>>pos;
  if(pos==1){

      insertbegin();
    
         }
        
 else if(pos==last){

           insertend();
        
        }
        
else if( pos-1<0||pos-1>last){

        return;
        
        }
        
 else{
    cout<<"Enter element: ";
      cin>>val;
      last++;
    
    for(i=last-1;i>=pos;i--){
    
         a[i]=a[i-1];
        
            }
            
            a[pos-1]=val;
            
            }
            
            }
       
 void deletebeg(){

      int i;
   if(last==0)
         return;
        
   cout<<a[0]<<" is deleted"<<endl;

   for(i=1;i<last;i++){

             a[i-1]=a[i];
            
           }
        
         last--;
        
          } 
        
void deleteend(){

         int i;
        
         if(last==0 )
               return;
        
 cout<<a[last-1]<<" is deleted"<<endl;

          last--;
        
          } 
          
 void deletemid(){

    int i,pos;
    
  cout<<"Enter position to delete: " ;
     cin>>pos;
    
    if(pos==1){
    
           deletebeg();
        
          }  
        
  else  if(pos==last){
    
          deleteend();
            
            }
        
 else  if(pos-1<0||pos-1>last){

         cout<<"Invalid"<<endl;
        
          }
        
   else{

         cout<<a[pos-1]<<" is deleted"<<endl; 
          
         for(i=pos;i<last;i++){
        
             a[i-1]=a[i];
            
             }
            
            last--;
            
               }
            
            }
            
 void display(){

   cout<<"Elements in the list : ";
  
      for(int i=0;i<last;i++){
    
       cout<<a[i]<<" ";
    
    }
   
             cout<<endl;
    
    } 
    
   };
    
    int main (){
    
      class arr a;
    int op;
      char s;
    
      do{
        
          cout<<"Enter option:";
            cin>>op;
           switch(op){
        
            case 1:
                 a.insertbegin();
                 break;
             case 2:
                  a.insertmid();
                  break;
             case 3:
                a.insertend();
                  break;
             case 4:
                 a.deletebeg();
                   break;
              case 5:
                 a.deletemid();
                   break;
              case 6:
                   a.deleteend();
                   break;
               case 7:
                   a.display();
                    break;
              default:
                  cout<<"Invalid choice"<<endl;
                  break;
            
                       }
            
              cout<<"Continue? :";
             cin>>s;
            
            } while (s=='y');
            
          return 0;
    
    }
