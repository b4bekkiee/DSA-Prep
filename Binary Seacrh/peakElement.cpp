#include <iostream>

using namespace std ;




int peakElement(int arr[] ,int n ) 
{


    int start = 0 ;
    int end = n -1  ;
    int mid = (start + end )/ 2 ;

    while(start  < end) {

        if(arr[mid]  < arr[mid+1]  ) {

            start = mid + 1 ;
        }
        else {
            end = mid ;
        }
        
    mid = (start + end )/ 2 ;
    }
return end ;

}




int main() {


  int arr [3] = {0,1,0} ;
  int n = 3 ;
  cout << peakElement(arr,n);

}