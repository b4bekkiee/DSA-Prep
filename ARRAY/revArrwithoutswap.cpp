#include <iostream  >

using namespace std;



void reverseArr (  int arr[],int n   ) {

      int start = 0;
      int end = n-1 ;
      while(start  < end) {
  
       int temp = arr[start] ;
        arr[start] =arr[end] ;
        arr[end] = temp ;

        start++ ;
        end-- ;
      }

}

void printArr (int arr[],int n) { 


    for(int i =0  ;  i < n;  i++) {

        cout << arr[i];
    }

}




int main() {


   


   
   int arr [4] = {1,2,3,4} ;
   int n= 4 ;



   reverseArr(arr,n);
   printArr(arr,n);





}