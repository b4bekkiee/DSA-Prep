#include <iostream>
using namespace std ;








    void revInt  (int number) {
            
       int revInt =  0 ;

       while(number != 0) {

        int digit = number % 10 ;

        revInt = revInt * 10 + digit ;
        number = number / 10 ;
       }  
           std ::   cout << revInt ;


    }

int main() {
  
   int num = 3456 ;
    revInt (num);

// int originalInt = 345 ;
// int reverseInt = 0 ;



// while(originalInt != 0) {
 

//  int digit = originalInt % 10 ;

//  reverseInt = reverseInt *  10 + digit ;

//     originalInt = originalInt / 10 ;
// }

// cout << reverseInt ;




}