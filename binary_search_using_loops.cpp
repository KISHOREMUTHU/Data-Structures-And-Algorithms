# Data-Structures-And-Algorithms
Here I will post my regular DSA problems

// Binary Search using loops 

#include<iostream>

#include<string.h>

using namespace std;

 

class bin_search{

    int a[100],n,l,r,mid,key;

    public:

    void getdata (); // Getting the input sorted array

    void display ();

    };

  void bin_search::getdata(){

        

        cin>>n;

      for(int i=0;i<n;i++){

          cin>>a[i];
                          }

        cin>>key;

        }

  void bin_search:: display (){

       l=0;

       r=n-1;

     // Process takes place here 

    while(l<=r){

         mid=(l+r)/2;

         if(a[mid]==key){

            cout<<mid;

            break;}

         else if(a[mid]<key){

             l=mid+1;} 

         else{

              r=mid-1;} 

            }

            }  

            

  int main(){

      bin_search b;

      b.getdata();

      b.display();

       return 0;
       
       }    
