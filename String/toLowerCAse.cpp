#include <iostream>

using namespace std ;
   
 char toLowercase(char ch) {

    if(ch >= 'a' && ch <= 'z') {
        return ch ;
    }
    else {
        char temp = ch - 'A' + 'a' ;  // ascii values == 90-65+97 = 122      ASCII VAlue of z is 122             
         return temp ;
    }
    

 }

  

int main() {






  cout << toLowercase('A') ; 


      


}