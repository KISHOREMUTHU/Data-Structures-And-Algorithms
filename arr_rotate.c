//# Data-Structures-And-Algorithms
//Here I will post my regular DSA problems
//Array Rotation Problem -2

#include <stdio.h>
int main(){
 
  int a[10],i,j,num,temp;
  int n;scanf("%d",&n);
for(i=0;i<n;i++){
   scanf("%d",&a[i]);}
 int choice;
 scanf ("%d",&choice);
  
for(j=1;j<=choice;j++){


  temp=a[0];
  for(i=0;i<n-1;i++){
    a[i]=a[i+1];}
  a[n-1]=temp;
}
 for(i=0;i<n;i++){
    printf("%d ",a[i]);} 
}

