# Data-Structures-And-Algorithms
Here I will post my regular DSA problems

#include<iostream>
using namespace std;

// Insertion sort algorithm

void insert_sort ( int *a,int n ) {
    
     int i ,j ,key ;
 
     
     for(i=1;i<n;i++){
    
          key= a[i]; // Assign key with a[i]
          j= i-1;
        
          while( j>=0&& a[j]>key){
        
             a[j+1]=a[j];
             j--;
            
                                 }
        
             a[j+1] = key;
    
                    }
     
}

int main (){

    int n;
    cout<<"Enter 'n' value : ";
    cin>>n;
    cout<<endl;
    int a[n];
    
    cout<<"Enter the array elements : "<<endl<<endl;
    for(int i=0;i<n;i++){
            cin>>a[i];
                        }
    
    insert_sort ( a,n );
    
    cout<<endl<<"The sorted array :\n\n";
   
    for(int i=0;i<n;i++){
      cout<<a[i]<<" ";
                        }
    
    cout<<endl;
    
    return 0;

}
