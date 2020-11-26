# Data-Structures-And-Algorithms
Here I will post my regular DSA problems

#include<iostream>
using namespace std;

// Binary Search Tree Implementation 

struct treeNode {
     
     int data ;
     struct treeNode *left;
     struct treeNode *right;

};

// Function to find the smallest element

treeNode *find_min ( treeNode *node ){
 
       if( node == NULL ){
    
            return NULL;
            
                         }
         
       if( node -> left ){
    
            node = find_min ( node -> left );     
                  
                         }
            
       else{
    
            return node;
        
           }
 
}

// Function to find the largest element 

treeNode *find_max ( treeNode *node ){

       if( node == NULL ){
    
             return NULL;
            
                         }
        
       if( node -> right ){
    
             node = find_max ( node -> right ); 
            
                          }
            
       else{
    
             return node;
        
           }
 
}

treeNode *insert ( treeNode *node , int data ){
      
        if( node == NULL ){
      
    // Create a new treeNode and assign the data value
  
          treeNode *temp;
          temp = new treeNode;
          temp -> data = data;
          temp -> left = temp -> right = NULL;
          return temp;
        
                          }
        
        if( data > ( node -> data ) ){
        
          node -> right = insert ( node -> right , data );
           
                                     }
            
        if( data < ( node -> data ) ){
        
          node -> left = insert ( node -> left , data );
        
                                     } 
        
        return node;

}

// Inorder Traversal function

void inorder ( treeNode * node ){
    
     if( node == NULL ){
        
        return;
    
                       }
 
       inorder ( node -> left );
       cout << node -> data << " ";
       inorder ( node -> right );
    
}

// Preorder Traversal function

void preorder ( treeNode * node ){
    
     if( node == NULL ){
        
        return;
    
                       }
            
       cout << node -> data << " ";
       preorder ( node -> left );
       preorder ( node -> right );     
    
}

// Postorder Traversal function 

void postorder ( treeNode * node ){
    
     if( node == NULL ){
        
        return;
    
                       }
      
       postorder ( node -> left );
       postorder ( node -> right );      
       cout << node -> data << " ";
    
}

treeNode *search ( treeNode *node , int data ){
    
      if( node == NULL ){
    
          return NULL;
        
                        } 
            
      else if( data > ( node -> data ) ){
    
        return search( node -> right , data );
         
                                        }
     
      else if( data < ( node -> data ) ){
    
       return search( node -> left , data );
         
                                        }
            
      else{
    
        return node;
         
          }
     
}

treeNode *deletion( treeNode * node , int data ){
     
       treeNode *temp;
        
       if( node == NULL ){
         
        cout<<"Element is not present in the tree " ;
    
                         }
   
      else if( data > ( node -> data ) ){
    
        node -> right = deletion (node->right,data);
    
                                        }
      
      else if( data < ( node -> data ) ){
    
        node -> left = deletion ( node -> left , data );
    
                                        }
            
      else{
    
      // Deletion process for node having two children 
      // Find the least element along the right side and assign it with the node to delete and then delete temp 

         if( node -> left && node -> right ){
        
               temp = find_min( node -> right );
               node -> data = temp -> data;
               node -> right = deletion( node -> right , temp -> data );
              
                                            }

       // Deletion process for node having one or no children 
   
         else{
        
            temp = node ;

            if( node -> left == NULL ){
            
                  node = node -> right ;
            
                                      }
            
            if( node -> right == NULL ){
            
                  node = node -> left ;
            
                                       }
            delete temp; 
            
             }
    
          }
       
          return node;


 }

// main () function to implement all the tree operations based on options 

int main (){
     
    struct treeNode *root = NULL , *temp;
    int e , op;
    char a;
    
    do{
    
        cout << "Enter choice :";
        cin >> e;
        
        switch(e){
        
        case 1:
             cout << "\nEnter element : ";
             cin >> e;
             root = insert ( root , e );
             cout << endl;
             cout << "Elements in the tree :\n\n";
             inorder ( root );
             cout << endl;
             break;
            
       case 2:
             
             temp = find_min ( root );
             cout << "\nSmallest element in the list : " << temp -> data << endl;
             break;
       
       case 3:
             
             temp = find_max ( root );
             cout << "\nLargest element in the list : " << temp -> data << endl;
             break;
       
       case 4:
    
             cout << "\nInorder Traversal :\n\n";
             inorder ( root );
             cout << endl;
             break;
             
       case 5:
             
             cout << "\nPreorder Traversal :\n\n";
             preorder ( root );
             cout << endl;
             break;
            
       case 6:
            
             cout << "\nPostorder Traversal :\n\n";
             postorder ( root );
             cout << endl;
             break;
            
       case 7:
    
             cout << "\nEnter element to search : ";
             cin >> e;
             temp = search( root , e );
            
             if( temp == NULL ){
            
               cout << "Element is not found in the list" << endl << endl;
                            
                               }
            
             else{
            
               cout << temp -> data << " is in the tree" << endl << endl;
              
                 }
            
             break;
      
      case 8:
             cout << "\nEnter element to delete : ";
             cin >> e;
             
             root = deletion( root , e );
             cout << "After deletion , elements in the tree :\n\n";
             inorder ( root );
             cout << endl;
             break;
            
      default:
           
             cout << "\nInvalid" << endl;
             break;
        
        }
    
    cout << "\nContinue ? : ";
    cin >> a;
    cout << endl;

    } while ( a == 'y' ); // To continue , press 'y'

   return 0;

}
