#include <iostream>
using namespace std ;

int squareRoot( int num ) {
 
  int start = 0 ;
  int end = num;
  int mid = (start+end) /2 ;
   int ans = -1;  
  while(start <= end) {
    int table = mid*mid;
    if(table == num) {
        return mid ;
    }
    else if(table < num) {
       ans = mid; 
       start = mid+1 ;
    }
    else {
        end = mid-1 ;
    } 
    mid = (start + end) /2 ;
  }
  return ans ;

}

int main() {

    int num = 36;

   cout << squareRoot(num);


}