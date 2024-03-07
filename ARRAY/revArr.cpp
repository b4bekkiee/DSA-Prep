#include <iostream>


using namespace std ;



void revArr(int arr[] , int n , int k  ) {


    int start = k + 1 ;
    int end = n -1 ;
    while(start  <= end) {

        swap(arr[start] ,arr[end] );
        start++ ;
        end--;
    }
}

void printArr(int arr[]  , int n ) 

{

   for( int i = 0 ; i < n ; i++) {
    cout << arr[i];
   }


}



int main() {


//revArr with K step 




int arr[5] ={1,2,3,4,5} ;
int n = 5 ;
int k = 2 ;

revArr(arr,n,k) ;
printArr(arr,n); //12354



}