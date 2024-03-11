#include  <iostream>
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


   bool palinChecker(char arr [] , int n ) {
 
    int start = 0 ;
     int end = n -1 ;
     while(start <= end) {
       if(   toLowercase( arr[start] )  != toLowercase( arr[end] ) ) {
         return false ;
       }
       else {
         start ++ ;
         end-- ;
       }
     }

     return true ;

     
   }

int main(){

  
   char ch [3] =  {'a' , 'b' , 'c' } ;


  int n = 3 ;
    cout <<   palinChecker(ch , n) ;
  
      
     
}