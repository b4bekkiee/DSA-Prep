#include <iostream>
using namespace std ;

void rotateArr(int arr[] , int n ) {


   int start = 0;
   int end = n-1;

   while(start <= end) {
  
   
   swap(arr[start] ,arr[end] );
   start++;
   end--;

   }



}

   void printArr(  int arr[] ,int n  )  {
    for(int i = 0 ; i < n ;i++) {
      cout << arr[i];
    }

   }

int main() {




int arr[5] ={1,2,3,4,5 } ;
int n = 5;
rotateArr( arr,n) ;
printArr(arr,n);










}