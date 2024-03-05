#include <iostream>
using namespace std ;

int main() {

 int arr [5]= {  4,7,89,99,-2 } ;
 int size = 5 ;


 int sm = arr[0];
  int lg = arr[0];

 for(int i = 0 ; i<size ; i++ ) {

    if(arr[i]  <  sm) {

        sm = arr[i];
    }
    else{
        lg = arr[i] ;
    }

 }
    cout<< "The smallest element in the array is :" << sm ;
    cout<< "The largest element in the array is :" << lg ;
}