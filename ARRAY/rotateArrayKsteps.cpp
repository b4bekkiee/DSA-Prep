#include <iostream>
using namespace std ;
  


    /// not a better solution
  void  rotateArr(  int arr[] ,int n , int k  ) {
         

       int temp[n];
    
    // Copy the elements to temp array after rotation
    for (int i = 0; i < n; i++) {
        temp[(i + k) % n] = arr[i];
    }
     for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }

   

}

void printArr(int arr[] ,int n) {

    for(int i =0 ; i  < n ; i++) {
        cout << arr[i];
    }
}

int main() {





  int arr [5] = {1,2,3,4,5} ;
  int n = 5 ;
  int k = 3 ;

  rotateArr(arr,n,k) ;
 printArr(arr,n);


}