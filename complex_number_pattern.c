# Data-Structures-And-Algorithms
Here I will post my regular DSA problems

#include<stdio.h>

// Complex number pattern program

int main (){
      
          int n;
          printf( "Enter 'n' value : " );
          scanf("%d",&n); // Getting user input 
        
          int total = 2*n-1;
        
        // Consider the pattern to be an array of numbers
        
          int a[total][total];
     
          int i,j,k=1;
          int l=n;
  
  // for loop for assigning the value to each array element
    
  while(k<=n){
    
    
     for(i=k;i<=total;i++){
    
       for(j=k;j<=total;j++){
          
         if(i==k||i==total||j==k||j==total){
            
             a[i][j] = l;
        
                                           }
        
                            }
       
                         }
            
         l--;
         k++;
         total--;
        
      }
    
    printf("\nThe answer is :\n\n"); 
    
   // for loop for printing the answers

    for(i=1;i<=2*n-1;i++){
      
      for(j=1;j<=2*n-1;j++){
    
         printf ("%d ",a[i][j]);
    
                           }
            
         printf("\n");
    
                        }
    
    
    }
        
           
