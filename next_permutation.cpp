
// C++ program to find the next permutation 

#include<iostream>
using namespace std;

int main (){

    int i,j,n;
    cin >> n ; // Getting the array space
    
    int a[n];
    for(i=0;i<n;i++){
       cin >> a[i];
       
    
    }
    
    int index = -1;
     for(i=n-1;i>0;i--){
        if(a[i] > a[i-1]){
          index = i ;
          break;  
        
        }
    
    }
    if(index == -1){
      for(j=n-1;j>=0;j--){
        cout << a[j]; 
    }
    
    
    }
    else{
    int pre = index;
       for(j=index+1;j<n;j++){
       if(a[j]>a[pre-1]&&a[j]<= a[pre]){
           pre = j;
         
                            }
    
    }
     int temp = a[index -1];
     a[index -1] = a[pre];
     a[pre] = temp;
    
    for(i=0;i<=index -1;i++){
      cout << a[i];
    }
    for(i=n-1;i>=index;i--){
     cout << a[i];
    }
    
    
    }
    
}
