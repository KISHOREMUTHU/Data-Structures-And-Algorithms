# Data-Structures-And-Algorithms
Here I will post my regular DSA problems

//Matrix binary search

#include <stdio.h>
#include<string.h>


        
   int main (){
      int a[3][3];
     int i,j,x,l,r,mid,mid_el;
     for(int i=0;i<3;i++){
     for(int j=0;j<3;j++){
         scanf ("%d",&a[i][j]);
         }
        }
     scanf ("%d",&x);
     l=0;
     r=8;
    while (l<=r){
      mid=(l+r)/2;
     mid_el=a[mid/3][mid%3];
      if(mid_el==x){
       printf("%d",mid_el);
       break;
      }
    else if(mid_el<x){
         r=mid-1;
        }
        else{
          l=mid+1;}
     
          }
        }
