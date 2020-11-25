# Data-Structures-And-Algorithms
Here I will post my regular DSA problems

// Merge Sort Algorithm

#include<iostream>
using namespace std;


// Merge function 

void merge( int *a ,int low ,int mid ,int high ){

         int i,j,k, temp [high+1];
         i=low;
         k=0;
         j=mid+1;
    
      // Merging takes place here   
           
        while(i<=mid && j<=high){
               
            if(a[i]<a[j]){
            
               temp[k]=a[i];
               i++;
               k++;
            
                         }
            
            else{
            
              temp[k]=a[j];
              j++;
              k++;  
            
                }
             
  
                                }
         
    // Two while loops for sorting the left over elements of array
     
           while (i<=mid){
        
             temp[k]=a[i];
             i++;
             k++;
        
                      }
            
       while (j<=high){
            
            temp[k]=a[j];
            j++;
            k++;
             
                      }
            
    // Assigning the sorted array from temp array to a[i]
      
       for(i=low;i<=high;i++){
    
         a[i]=temp[i-low];
        
                             }
            
}

// Function for performing merge sort 

void merge_sort(int *a,int low ,int high){
 
    int mid;
     
    if(low<high){
    
       mid = (low+high) /2;
    merge_sort(a,low,mid);        // Divide and conquer takes place here to split array into halves
    merge_sort(a,mid+1,high);
    merge(a,low,mid,high);        // Calling the merge function here 
    
                   }

}

int main (){

    int n;
    cout<<"Enter 'n' value : ";
    cin>>n;
    cout<<endl;
    int a[n];
    
    cout<< "Enter the array elements : "<<endl<<endl;
  
    for(int i=0;i<n;i++){
             cin>>a[i];
                        }
    
    merge_sort(a,0,n-1);
    cout<<endl<<"The sorted array :\n\n";

    for(int i=0;i<n;i++){
       cout<<a[i]<<" ";
                        }
    cout<<endl;

    return 0;

}
