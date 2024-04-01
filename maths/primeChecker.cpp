#include <iostream>
using namespace std ;

bool primeChecker( int num ) {

//basecase

   if(num <= 1) {
    return false ;
   }
    for(int i = 2 ; i < num ;i++) {

        if(num % i == 0) {
            return false ;
        }
    }
    return true ;

}


int main() {










  int num = 3;

  if(primeChecker(num)) {
    cout <<  "The given number is prime" ;
  }
  else {
    cout << "The given number is not prime";
  }
  







}