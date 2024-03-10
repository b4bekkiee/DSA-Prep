#include  <iostream>
using namespace std ;

   bool palinChecker(char arr [] , int n ) {
 
    int start = 0 ;
     int end = n -1 ;
     while(start <= end) {
       if(arr[start] !=  arr[end] ) {
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

  
   char ch [3] =  {'a' , 'b' , 'a' } ;


  int n = 3 ;
    cout <<   palinChecker(ch , n) ;
  
      
     
}