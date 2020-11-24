# Data-Structures-And-Algorithms
Here I will post my regular DSA problems

// Linear search implementation

#include<iostream>
using namespace std;
#include<conio.h>
#include<stdlib.h>

class lin_search{

     public:

     int a[100],n,i,x;
    
     lin_search(){
    
     cout<<"Enter number of array elements: ";
     cin>>n;
    
     cout<<"Enter the array elements: ";

     for(i=0;i<n;i++){
          cin>>a[i];
                     }
    
     cout<<"Enter the element to search: ";
     cin>>x;
    
     for(i=0;i<n;i++){

       if(a[i]==x){
         cout<<"Found at index "<<i<<endl;
         exit(0);
                  } 
        
                     }
      
     cout<<"Not found"<<endl;
    
    }

};

int main (){

     lin_search l;
     return 0;  
   
           }
