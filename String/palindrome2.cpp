#include <iostream>
#include <string>
using namespace std ;




     bool valid(char ch) {
        if((ch >= 'a'  && ch <= 'z' )|| (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9') ) {
            return true ;
        }
        return  false ;
     } 

     char toLowerCase( char ch )  {
        if(ch >= 'a' && ch <= 'z' ) {
            return ch ;
        }
        else {
            int temp = ch - 'A' + 'a' ;
            return temp ;
        }

     }



    bool palindromeChecker(string temp) {
        int start = 0 ;
        int end = temp.size () - 1;
        while(start <= end) {
 
        if(temp[start] != temp[end]) {
            return false ;
        }
        else {
            start ++;
            end --;
        }

        }
      return true ;
    }


  bool isPalindrome( string str ) {


   string temp = "" ;
   for(int i = 0 ; i<str.size() ; i++ ) {

    if(valid(str[i])) {
     

   temp.push_back(str[i]) ;

    }
   }
  

  for(int j = 0 ; j < temp.size() ;j++ ) {
    temp[j] = toLowerCase(temp[j]) ;
  }

   
   return palindromeChecker(temp) ;

  }



int main() {


string str1 = "Too) hot to hoot." ;
if( isPalindrome(str1) ) {
    cout << "The given string is palindrome";
}
else {
    cout << "not palindrome" ;
}


}