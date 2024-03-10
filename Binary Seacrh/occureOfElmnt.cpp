#include <iostream>


using namespace std ;


int leftOcc (int arr[] ,int n ,int key ) {


     int start = 0 ;
     int end = n -1 ;
     int ans = -1 ;


     int mid = (start + end) /2 ;
     while(start <= end)  {
          if(arr[mid] == key  ) {
           

           ans = mid ;
           end = mid -1 ;
 }
      else if(key > arr[mid]) {
          start = mid + 1 ;

      }
      else {

          end = mid -1 ;
      }

     mid = (start + end) / 2 ;

     }
    return ans ;



}


int rightOcc (int arr[] ,int n ,int key ) {


     int start = 0 ;
     int end = n -1 ;
     int ans = -1 ;


     int mid = (start + end) /2 ;
     while(start <= end)  {
          if(arr[mid] == key  ) {
           

           ans = mid ;
           start = mid +  1 ;
 }
      else if(key > arr[mid]) {
          start = mid + 1 ;

      }
      else {

          end = mid -1 ;
      }

     mid = (start + end) / 2 ;

     }

    return ans ;


}


int main() {








int arr[5] = {1,2,3,3,3} ;

int n = 5 ;
int key = 3 ;

            cout <<   "The LeftMost at index at :" <<  leftOcc(arr,n,key) ;
  

             cout <<   "The Right at index at :" <<rightOcc(arr,n,key) ;
}