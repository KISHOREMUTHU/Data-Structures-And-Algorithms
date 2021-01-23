#include<iostream>
using namespace std;

// Program to seggregate 0s and 1s

int main (){

    int i,j,n;
    cin >> n ; // Getting the array space
    
    int a[n];
    int c1 =0,c2=0; // Assigning 1s count and 0s count with 0
    
    // Getting the array inputs

    for (i=0;i<n;i++){
    
     cin >> a[i];
    
                     }
    
    for (i=0;i<n;i++){
    
        // If the number is 1 , increment c2
               if(a[i]){
                   c2++;
                       }
        
        // Else increment c1
               else{
                   c1++;
                   }
            
                     }
    
    // Assigning 0s to the array at the first 
    
    for(j=0;j<c1;j++){
    
               a[j]=0;
            
                     }
            
    // Assigning 1s after assigning 0s to the array   
    for(j=c1;j<n;j++){
    
               a[j]=1;
            
                     }
     
    // Printing the final output
    for (i=0;i<n;i++){
    
     cout << a[i] << " ";
    
                     }
    
    
}
