#include <iostream>
using namespace std ;

int majorityElement (int arr[] , int n ) {
   
      int counter = 0 ;
      int candidate = arr[0] ;
      for(int i = 0 ; i < n ;i++) {
           
           if(counter ==0) {
            counter = 1 ;
            candidate = arr[i];
           }
           else if (arr[i] == candidate) {
                counter ++ ;
           }
           else {
            counter-- ;
           }
      }

      int counter2 = 0 ;
      for(int i = 0 ; i < n ;i++) {
        if(arr[i]  == candidate) {
          counter2++ ;
        }
      }
      if(counter2 > n/2 ) {
        return candidate ;
      } 
    return -1 ;
}

 int main() {

   int arr[5] = {5,3,5,5,5} ;
   int n = 5 ;
  cout <<   majorityElement(arr,n);



 }

