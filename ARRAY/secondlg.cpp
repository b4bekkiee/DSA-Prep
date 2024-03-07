#include <iostream>

using namespace std ;
int main() {





  //bruteForce solutoion // array need to be sorted 
    
//     int arr [5] = {1,1,3,4,6} ;
//     int n = 5 ;

//       int lg = arr[n-1] ;
//       int secLg = 0;
// for( int i = n-2   ; i>= 0 ;i++ ) {


//     if(arr[i] != lg ) {

//          secLg = arr[i] ;
//          break ;
//     }
// }    
// cout << secLg;
  



  //optimal CODE


    int arr [6] = {1,7,3,4,5,9} ;
    int n = 6 ;

    int lg = arr[0] ;
      
      int secLg = -1 ;

    for(int i = 0 ; i < n ; i++) {

   if(arr[i]  > lg  ) {
    secLg = lg ;
    lg = arr[i] ;



   }
   else if(  arr[i] < lg && arr[i] >secLg    ) {

    secLg = arr[i] ;

   }


    }
   
   cout << secLg ;




 





}