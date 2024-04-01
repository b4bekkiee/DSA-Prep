#include <iostream>
using namespace std ;
  


    /// not a better solution
  void  rotateArr(  int arr[] ,int n , int k  ) {
         
 k = k%n;
   int j = 0 ;
   int ansArr[5];
   for(int i = n-k ; i < n ;i++) {
   
   ansArr[j++] = arr[i] ;
   }
   for(int i = 0 ; i <=k ;i++) {
    ansArr[j++] =arr[i];
   }
    for(int i =0 ; i  < n ; i++) {
        cout << ansArr[i];
    }

}



int main() {





  int arr [5] = {1,2,3,4,5} ;
  int n = 5 ;
  int k = 11 ;

  rotateArr(arr,n,k) ;
 


}