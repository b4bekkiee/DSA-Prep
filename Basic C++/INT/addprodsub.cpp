#include  <iostream>
using namespace std;

   void reverseArray (int arr [] ,  int n) {
      
    
         int start = 0 ;
         int end = n-1 ;
         for(int i =0 ; i < n ; i++) {

            if(start < end) {
                swap(arr[start],arr[end]);
                start++ ;
                end--;
            }

         }




   } 
   void printArr (int arr [],int n) {

    for(int i =0 ; i < n ; i++) {

        cout << arr[i];

    }
   }



int main() {



     int arr [4] = {1,2,3,4};
     int n= 4 ;

          reverseArray(arr,n);
          printArr(arr,n);
          



}