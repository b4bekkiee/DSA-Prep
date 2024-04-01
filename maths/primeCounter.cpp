
#include <iostream>


bool isPrime( int num  ) {

 if(num <= 1) {
    return false ;
 }
 for(int i = 2 ; i< num ;i++ )

 if(num % i ==0) {
    return false ;
 }
 return true;

}

int primeCounter(int num) {
  int counter = 0 ;
    for(int i = 2 ; i <num ;i++) {
   

          
      if(isPrime(i)) {
     
     counter++;
      }
    
    }
 return counter ;
}


//leetcode 204


using namespace std ;

int main() {


   int num = 30 ;

   cout<< primeCounter(num) ;




}

