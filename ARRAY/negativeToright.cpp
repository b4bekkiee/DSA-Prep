#include <iostream>
using namespace std;



 void negativeToRight(int arr[] , int n ) {

    int positive = 0 ;
    for(int i = 0; i < n ; i++) {
        if(arr[i] >= 0) {
            swap(arr[i] ,arr[positive]  ) ;
            positive++;
        }
    }
 }

 void printArr( int arr[] ,int n ) {

    for(int i = 0 ; i < n ;i++) {
        cout << arr[i];
    }

 }



int main() {







  int arr[5] = {-1,2,-2,1,-2} ;
  int n = 5;

  negativeToRight(arr,n);
  printArr(arr,n);



}