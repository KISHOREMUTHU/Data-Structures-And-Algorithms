//# Data-Structures-And-Algorithms
//Here I will post my regular DSA problems
//Minimum in Rotated sorted array
//Problem - 3

#include <stdio.h>
#include<string.h>


        
   int main (){
   
     int i,x,l,r,mid,m;
     int a[8]={4,5,6,7,8,0,1,2};
    
     l=0;
     r=7;
       while (l<r){
       mid=(l+r)/2;
        if(a[mid]>a[mid+1]){
          printf("%d",a[mid+1]);
          break;
         }
        else if(a[mid]<a[mid-1]){
          printf ("%d",a[mid]);
         break;
         }
        else if(a[r]>a[mid]){
         r=mid-1;
        }
         else{
        l=mid+1;
         }
        }
         }
