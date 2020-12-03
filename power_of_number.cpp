
// Power of a number without using in - built pow () function


#include <iostream>
using namespace std;

double power (double a , int n){
    
        double result = 1;
        while (n>0){
          
          if(n%2==1){
          
              result *=a;
              
                    }
                    
          a*=a;
          n/=2;
          
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
