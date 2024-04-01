#include <iostream>


using namespace std;

void prefixSum( int arr[] ,int n ) {

    for(int i = 1 ; i < n ;i++) {

        arr[i] =    arr[i] + arr[i-1]  ;
    }

}

void printArr(  int arr[] , int n  ) {


 
   for(int i = 0 ; i < n ; i++) {
    cout << arr[i] << " ";
   }



}



int main() {











int arr [] = {1,2,3,4,5} ;
int n = 5 ;
prefixSum(arr,n) ;
printArr(arr,n);




}