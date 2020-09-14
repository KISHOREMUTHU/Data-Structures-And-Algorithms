//# Data-Structures-And-Algorithms
//Here I will post my regular DSA problems
//Search an element in Rotated sorted array
//Problem - 1
#include <stdio.h>
#include<string.h>


        
   int main (){
   
     int i,x,l,r,mid,m;
     int a[8]={5,5,6,6,7,0,1,2};
      scanf ("%d",&x);
     l=0;
     r=7;
     
    while (l<=r){
      mid=(l+r)/2;
     if(a[mid]==x){
       printf("%d",mid);
      break;
    }
     else if(a[mid]>x){
         if(a[l]<=x&&a[mid]>=x){
           r=mid-1;
        }
        else{
           l=mid+1;}}
     else if(a[mid]<x){
           if(a[mid]<=x&&a[r]>=x){
            l=mid+1;
            }
            else{
             r=mid-1;
            }
            } 
       else{
      l++;}  
     }  
          }
