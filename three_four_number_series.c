# Data-Structures-And-Algorithms
Here I will post my regular DSA problems

// Series : 3 , 4 , 33 , 34 , ......

#include<stdio.h>

int main (){
      
         int n;
         printf("Enter 'n' value : ");
         scanf("%d",&n);
        
         int a[n];
         a[0]=3;
         a[1]=4;
         int  k=1 ;
      
      // In this loop , all the numbers of the series upto 'n' is generated 
  
     for(int i=0;i< (n-1)/2;i++){
    
         a[++k]=a[i]*10+3;
         a[++k]=a[i]*10+4;
    
                                }
     
      printf("\nThe series upto 'n' value :\n\n");

     for(int j=0;j<n;j++){
    
         printf("%d ",a[j]);
        
                         }
     
         printf("\n");

           }
