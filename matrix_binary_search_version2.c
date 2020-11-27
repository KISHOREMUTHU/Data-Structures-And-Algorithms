# Data-Structures-And-Algorithms
Here I will post my regular DSA problems

// Matrix Binary search II

#include <stdio.h>
#include<string.h>

int main (){
    int a[3][3]={1,2,3,2,4,6,3,6,9};
    int  x;
    scanf("%d",&x);
  int  l=0;
   int r=2;
    int mid_el;
     while(l<3&&r>=0){
          
   
    
         if(a[l][r]==x){
         printf("%d",x);
          break;
           }
       else{
       if(a[l][r]>x){
                r--;
            }
            else{
              l++;}
            }
            }
            
     
    }
