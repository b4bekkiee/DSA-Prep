#include <iostream>


using namespace std ;

 void thirdLargest(int arr [] , int n ) {

    int largest = arr[0] ;
    int secondLargest = - 1;
    int thirdLargest = -1 ;
    for(int i = 1 ; i < n  ; i++) {
        if(arr[i] > largest) {
            thirdLargest = secondLargest ;
            secondLargest = largest ;
            largest = arr[i] ;
        } 
        else if(arr[i] < largest && arr[i] > secondLargest) {
            thirdLargest = secondLargest ;
            secondLargest = arr[i] ;
        }
        else if(arr[i] < secondLargest && arr[i] > thirdLargest) {
            thirdLargest = arr[i] ;
        }
    }
    cout << thirdLargest ;
 }


int main() {




 int arr[8] = {1,2,99,4,5,6,100} ;
 int n =  8 ;

 thirdLargest(arr,n) ;
   



}