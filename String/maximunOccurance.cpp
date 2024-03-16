#include <iostream>
#include <string>



using namespace std ;



char alphaNumeric ( char ch ) {
 
   if(ch >='a' && ch <= 'z' || ch >= 'A' && ch  <= 'Z' ||  ch >=  'o' && ch <= '9'  ) {
    return ch ;
   }

}



char toLower(  char ch ) {
  if(ch >= 'a' && ch <= 'z' ) {
    return ch ;
  }
  else {
    int temp = ch - 'A' + 'a' ;
    return temp;
  }

}

bool palindromeChecker( string str ) {

    int start = 0 ;
    int end = str.size () - 1; ;


   while(start < end) {


    if(!alphaNumeric(str[start])) {
        start++ ;
    }
     if(!alphaNumeric(str[end])) {
        end-- ;
    }

    if(     toLower(str[start]) !=  toLower(str[end] )  ) {
        return false ;
    }
    else {
        start ++ ;
        end -- ;
    }
   }
  return true ;



}


int main() {



  string str = "ma,m" ;

  if(palindromeChecker(str)) {
    cout << "The given string is palindrome" ;
  }
  else {
    cout <<  "The Given string is not palindome" ;
  }
   

  


}