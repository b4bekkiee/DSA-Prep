#include <iostream>

using namespace std ;
 

 void uniqueElement( int arr [] , int n  ) {
  
    for(int i = 0 ; i < n ; i++) {
      for(int j = i + 1  ; i < n ; i++) {
        if(arr[i] == arr[j]) {
          arr[i] = arr[j] = -1;
        }
      }
    }

    int ans = 0 ;
    for(int i = 0 ;  i < n ; i++) {
      if(arr[i] > 0 ) {
        ans = arr[i] ;
      }
    }
    cout << ans ;



 }
  // bitminipulation

    void singleElement(int arr[] , int n ) {
        int ans = 0 ;
        for(int i = 0 ; i < n  ; i++) {
       
          ans = ans ^ arr[i] ;

        }

   cout << ans ;
    }

int main() {

   

   int arr [5] = {1,1,2,2,3} ;
   int n = 5 ;
   uniqueElement(arr,n );
  singleElement(arr,n);





}