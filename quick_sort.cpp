# Data-Structures-And-Algorithms
Here I will post my regular DSA problems

#include<iostream>
using namespace std;

// Quick Sort Algorithm

void swap ( int *a ,int *b ){

     int c;
     c=*a;
     *a=*b;
     *b=c;
   
}

int partition (int a[], int low, int high) 
{ 
    int pivot = a[high];    // Pivot element
    int i= (low -1);
    
    // Partitioning takes place here 
    
    for( int j = low ; j<=high -1; j++){
    
        if(a[j]<pivot){
        
           i++;
           swap(&a[i],&a[j]);
        
                      }
          
                                       }
    
      swap(&a[i+1],&a[high]);
      return (i+1);

}

int quick_sort( int a[] , int low ,int high ){
        
        int pi;
        
        if(low<high){
        
         pi= partition (a,low,high);
         quick_sort(a, low ,pi -1 );
         quick_sort(a, pi + 1 , high);
        
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
    
    quick_sort ( a,0,n-1 );
    
    cout<<endl<<"The sorted array :\n\n";
   
    for(int i=0;i<n;i++){
      cout<<a[i]<<" ";
                        }
    
    cout<<endl;
    
    return 0;

}
