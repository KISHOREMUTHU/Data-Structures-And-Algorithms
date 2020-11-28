# Data-Structures-And-Algorithms
Here I will post my regular DSA problems

// Matrix Binary search II

// In this case , the matrix is in sorted form when we see columnwise

#include <stdio.h>
#include<string.h>

int main (){

    int a[3][3]={1,2,3,2,4,6,3,6,9}; // input sample array
    int  x;
    scanf("%d",&x);

    int l = 0;
    int r = 2;
    int mid_el;

    // Binary search takes place in a condition that l must be less than number of rows and r must be greater than 0
 
    while( l < 3 && r > = 0 ){
          
         if(a[l][r]==x){

           printf("%d",x);
           break;

                       }
 
        else{

           if(a[l][r]>x){

                r--;

                        }

           else{

              l++;

               }

           }

            }
            
        return 0 ;

    }
