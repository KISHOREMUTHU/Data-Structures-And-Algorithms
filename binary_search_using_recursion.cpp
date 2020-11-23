# Data-Structures-And-Algorithms
Here I will post my regular DSA problems

//Binary search using recursion

#include<iostream>
using namespace std;
#include<conio.h>
#include<stdlib.h>

class bin{
     public:
    int a[100],n,l,r,mid,x;

     // Getting the input sorted array

    void input(){

        cin>>n;
        for(int i=0;i<n;i++){
          cin>>a[i];
                            }
            
       l=0;
       r=n-1;
       x=8;
    
    int result=bin_search(a,l,r,x);
        
    cout<<result;
    }

int bin_search (int a[],int l,int r,int x) {

       int mid;

       if(l>r){
     cout<<"Not found";
              }
        
      else{

       mid=(l+r)/2;
    
       if(a[mid]==x){
       return mid;
                    }
    
   else if(a[mid]>x){
      return bin_search(a,l,mid-1,x);
                    }
  
      else{
     return bin_search(a,l+1,r,x);
          }
        
    }  

  }

};

int main(){
     
     bin b;
     b.input();
        
     return 0;
    
    }
