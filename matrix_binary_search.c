# Data-Structures-And-Algorithms
Here I will post my regular DSA problems

//Matrix binary search

#include <stdio.h>
#include<string.h>


        
   int main (){

      int a[3][3]; // 3x3 matrix for an example . If you wan , you can take any input matrix
     
      int i,j,x,l,r,mid,mid_el; // mid - middle value , mid_el - exact matrix equivalent value of mid

    for(int i=0;i<3;i++){

        for(int j=0;j<3;j++){

         scanf ("%d",&a[i][j]);

                            }
                         }

     scanf ("%d",&x);

     l=0;
     r=8;
     
     // Binary Search method

     while (l<=r){

      mid=(l+r)/2;
      mid_el=a[mid/3][mid%3]; // Formula to find the equivalent mid element in the matrix 

      if(mid_el==x){

       printf("%d",mid_el);
       break;

                   }

      else if(mid_el<x){

         r=mid-1;

                       }

      else{

          l=mid+1;

          }
                 }

         return 0 ;

        }
