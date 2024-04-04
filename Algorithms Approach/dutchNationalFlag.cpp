#include <iostream>
using namespace std ;
//TC : o(n)
//SC : 0(1)
void dutchFlag( int arr[] , int n ) {

 int start = 0 ;
 int mid = 0 ;
 int end = n-1 ;

 while(mid <= end)  {
    if(arr[mid] == 0 ) {
        swap(arr[start],arr[mid] );
    }
    else if(arr[mid] == 1) {
        mid++;
    }
    else {
        swap(arr[mid],arr[end] ) ;
        end--;
    }
}
}
void printArr( int arr[] , int n ) {
  

  for(int i = 0 ; i < n ;i++) {
    cout << arr[i];
  }
}


int main() {
int arr[5] = {1,1,0,2,2} ;
int n = 5 ;
dutchFlag(arr,n) ;
printArr(arr,n);      
}