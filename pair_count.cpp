// C++ program to count the number of pair of numbers present in a given array

#include<iostream>
using namespace std;

int main (){

    int i,j,n;
    cin >> n;
    int a[n];
    for(i=0;i<n;i++){
      cin >> a[i];
    
    }
    
    for(i=0;i<n-1;i++){
     for(j=i+1;j<n;j++){
    
        if(a[i]>a[j]){
        
           int temp = a[i];
            a[i]=a[j];
            a[j] = temp;
        
        }
    }
    
    }
    
     int count = 0;
    
    for(i=0;i<n;i++){
      if (a[i] == a[i+1]){
          count ++;
          i++;
        
    }
    
    }
    cout << count;
    
}
