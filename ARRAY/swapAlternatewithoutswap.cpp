#include <iostream >

using namespace std ;


 
void swapValues  (  int& a  , int& b   ) {

 int temp = a ;
 a = b ;
 b = temp ;




}


void swapAlternate ( int arr[] , int n    ) {

for( int i = 0 ; i < n ; i = i +2    ) {


    if(i+1 < n) {

        // swapValues(arr[i] , arr[i+1] ) ;
        int temp = arr[i] ;
        arr[i] = arr[i+1] ;
        arr[i+1] = temp ;
    }


}
        
} ;


void printArr (int arr [],int n) {

    for(int i = 0 ; i < n ;  i++) {

        cout << arr[i];
    }
}
 

int main () {






int arr [4] = {1,2,3,4} ;

int n = 4 ;
swapAlternate(arr,n);
printArr(arr,n);


}