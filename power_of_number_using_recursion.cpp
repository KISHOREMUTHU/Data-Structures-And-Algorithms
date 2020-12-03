# Data-Structures-And-Algorithms
Here I will post my regular DSA problems

// Power of a number without using in - built pow () function
// Recursive method

#include <iostream>
using namespace std;

double power (double a , int n){
    
        double result = 1;
        
        if ( n == 0 ){
        
            return 1 ;
            
                     }
                     
        else if ( n == 1 ){
        
            return a;
            
                          }
                          
        else if( n % 2 == 0 ){
        
            return power( a , n/2 ) * power( a , n/2 );
            
                             }
                             
        else{
        
            return power( a , ( n/2 ) + 1 ) * power( a , n/2 ); 
            
            }
                  
                  
        return result;
    
                             }
                             
int main()
{
    double num , p ,r;
    cout << "Enter number : ";
    cin >> num ;
    cout << "Enter exponent :";
    cin >> p ;
    
    if(p<0){
    
        r = power ((1/num),-p);
        
           }
           
    else {
    
          r = power (num , p);
          
         }
         
    cout << "The answer is : " << r;
    return 0;
    
}
