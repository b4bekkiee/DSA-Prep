#include <iostream>


using namespace std ;


  bool  prefixAndSuffix( int arr[] , int n   ) {
  
  int totalSum = 0 ;
  for(int i = 0 ; i < n ; i++) {
   
totalSum = totalSum + arr[i] ;
}
int prefixSum = 0 ;
  for(int i = 0 ; i < n  ; i++) {

   prefixSum = prefixSum + arr[i] ;
   int sufixSum = totalSum - prefixSum ;
   if(sufixSum == prefixSum) {
    return true ;
   }
  
}
 return false ;
  }



int main() {







    int arr[5] = {6,2,4,3,1};
    int n = 5 ;
  if(prefixAndSuffix(arr,n)) {
    cout <<  "suffixSum is equal to prefix" ;
  }
  else {
    cout << "Not equal" ;
  }
    
    
    
    
    
    }