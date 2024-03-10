#include <iostream>
using namespace std ;

  void reverseString(char arr[] , int n ) {

      int start = 0 ;
      int end = n-1 ;
      while(start <= end) {

        swap(arr[start] , arr[end] ) ;
        start ++  ;
        end -- ;
      }
  
  }

    void printString(char arr[]  , int n ) {

           for(int i = 0 ; i < n  ; i++) {

            cout << arr[i];
           }

    }


int main() {


    char arr [5] = {'a','b','c'} ;
    int n = 5 ;
     reverseString(arr,n) ;
    printString (arr,n);


}