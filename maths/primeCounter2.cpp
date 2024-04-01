#include <iostream>
#include <vector>

using namespace std ;



//using algo of sieve of erato



int primeCounter ( int num ) {

 vector <bool> prime(num+1,true) ;
 prime[0] =prime[1] = false ;
 int counter = 0 ;
 for(int i = 2 ; i < num ;i++) {
    
    if(prime[i]) {
     
    counter++;

   for(int j = 2*i ; j<num ; j =j+1) {

    prime[j] = 0 ;
   }
    }
 }  
 return counter; 

}


int main() {





  int num = 40 ;

  cout << primeCounter(num) ;











}